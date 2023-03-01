/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "pch.h"
#include "ItemLinks.h"

#include "Globals.h"
#include "Achievements.h"
#include "Items.h"
#include "UI.h" // for ExecuteItemLink

namespace eqlib {

// Used in ConvertItemTags, to be safe from change this could be imported from the game.
// This can be found from within ConvertItemTags
constexpr int TagSizes[ETAG_COUNT] = {
	58,  // 93 on live
	3,
	3,
	0,
	0,
	0,
	0,
	0,
	0,
};

// Token used to signal the item tag in a text string
constexpr char ITEM_TAG_CHAR = '\x12';

// Looks for a link in the provided string. Returns the link if it exists. If no link is
// found, returns a link with ETAG_INVALID.
TextTagInfo ExtractLink(std::string_view inputString)
{
	TextTagInfo link;
	link.tagCode = ETAG_INVALID;

	// Need at least enough space for begin + end + code + contents
	if (inputString.length() < 4)
		return link;

	for (size_t i = 0; i < inputString.length(); ++i)
	{
		// look for starting character.
		char ch = inputString[i];
		if (ch == ITEM_TAG_CHAR)
		{
			// look for ending character.
			int end = -1;

			for (size_t pos = i + 2; pos < inputString.length(); ++pos)
			{
				if (inputString[pos] == ITEM_TAG_CHAR)
				{
					end = (int)pos + 1;
					break;
				}
			}

			if (end == -1)
			{
				// found starting tag but no ending tag.
				link.link = inputString.substr(i, 1);
				return link;
			}

			// link.link will hold the whole range of the link, including the \x12 characters.
			link.link = inputString.substr(i, end - i);
			end -= 1;

			link.tagCode = (ETagCodes)(inputString[i + 1] - '0');

			if (link.tagCode < ETAG_FIRST || link.tagCode > ETAG_LAST)
				return link;

			// the tag size determines where the text of the link is located relative to the
			// character after the tag code.
			const size_t tagSize = TagSizes[link.tagCode];

			// If the length of the tag from i is bigger than the string we know it's invalid
			if (i + tagSize > inputString.size())
			{
				link.tagCode = ETAG_INVALID;
				return link;
			}

			size_t textStart = 0;

			switch (link.tagCode)
			{
			case ETAG_ITEM:
				textStart = i + (tagSize - 1);
				link.text = inputString.substr(textStart, end - textStart);
				return link;

			case ETAG_PLAYER:
				textStart = i + (tagSize - 1);
				link.text = inputString.substr(textStart, end - textStart);
				if (link.text.length() > 0 && link.text[0] == ':')
					link.text = link.text.substr(1);
				return link;

			case ETAG_SPAM:
				link.text = "(SPAM)";
				return link;

			case ETAG_ACHIEVEMENT:
			case ETAG_SPELL:
			case ETAG_FACTION:
				textStart = inputString.find('\'', i + 1);
				if (textStart != std::string_view::npos)
				{
					textStart += 1;
					link.text = inputString.substr(textStart, end - textStart);
				}
				return link;

			case ETAG_COMMAND2:
				textStart = inputString.find(':', i + 1);
				if (textStart != std::string_view::npos)
				{
					textStart += 1;
					link.text = inputString.substr(textStart, end - textStart);
					return link;
				}
				// fallthrough
			case ETAG_DIALOG_RESPONSE:
			case ETAG_COMMAND:
			default:
				textStart = i + tagSize + 2; // 2 skips the first marker and the tag code.
				link.text = inputString.substr(textStart, end - textStart);
				return link;
			}
		}
	}

	return link;
}

size_t ExtractLinks(std::string_view str, TextTagInfo* outTagInfo, size_t numTagInfos)
{
	std::string_view current = str;
	size_t count = 0;

	while (count < numTagInfos)
	{
		TextTagInfo& tagInfo = outTagInfo[count];
		tagInfo = ExtractLink(current);
		if (tagInfo.tagCode == ETAG_INVALID)
			break;

		count++;

		// Get offset of tag
		size_t pos = tagInfo.link.data() - current.data();
		if (pos < 0)
			break;

		current = current.substr(pos + tagInfo.link.length());
	}

	return count;
}

bool GetItemLink(ItemClient* pItem, char* Buffer, size_t BufferSize, bool Clickable)
{
	char hash[MAX_STRING] = { 0 };
	bool retVal = false;

	pItem->CreateItemTagString(hash, MAX_STRING, true);

	size_t len = strlen(hash);
	if (len > 0)
	{
		if (Clickable)
		{
			snprintf(Buffer, BufferSize, "%c%d%s%s%c", ITEM_TAG_CHAR, ETAG_ITEM, hash, pItem->GetName(), ITEM_TAG_CHAR);
		}
		else
		{
			snprintf(Buffer, BufferSize, "%d%s%s", ETAG_ITEM, hash, pItem->GetName());
		}

		retVal = true;
	}

	return retVal;
}

void FormatItemLink(char* Buffer, size_t BufferSize, ItemClient* pItem)
{
	char itemTagString[512] = { 0 };
	pItem->CreateItemTagString(itemTagString, 512, true);

	snprintf(Buffer, BufferSize, "%c%d%s%s%c", ITEM_TAG_CHAR, ETAG_ITEM, itemTagString, pItem->GetName(), ITEM_TAG_CHAR);
}

void FormatSpellLink(char* Buffer, size_t BufferSize, EQ_Spell* Spell, const char* spellNameOverride /* = nullptr */)
{
	snprintf(Buffer, BufferSize, "%c%d3^%d^'%s%c", ITEM_TAG_CHAR, ETAG_SPELL, Spell->ID,
		spellNameOverride && spellNameOverride[0] ? spellNameOverride : Spell->Name, ITEM_TAG_CHAR);
}


void FormatAchievementLink(char* Buffer, size_t BufferSize, const Achievement* achievement, std::string_view playerName)
{
	//std::string_view line = "You say to your guild, '\x12" "3TestToon^500010200^1^0^0^0^0^0^'Welcome to Crescent Reach (1+)\x12'";

	SingleAchievementAndComponentsInfoWithCounts achievementInfo;
	if (AchievementManager::Instance().FillAchievementComponentInfoWithCounts(achievementInfo,
		AchievementManager::Instance().GetAchievementIndexById(achievement->id)))
	{
		fmt::memory_buffer mbuf;
		fmt::format_to(std::back_inserter(mbuf), "{}^{}^{}", playerName, achievement->id, static_cast<int>(achievementInfo.achievementState));

		for (int index = 0; index < achievementInfo.completionComponentStatusBitField.GetNumElements(); ++index)
			fmt::format_to(std::back_inserter(mbuf), "{}^", achievementInfo.completionComponentStatusBitField.GetElement(index));
		for (int index = 0; index < achievementInfo.indirectComponentStatusBitField.GetNumElements(); ++index)
			fmt::format_to(std::back_inserter(mbuf), "{}^", achievementInfo.indirectComponentStatusBitField.GetElement(index));
		for (int index = 0; index < achievementInfo.unlockedComponentStatusBitField.GetNumElements(); ++index)
			fmt::format_to(std::back_inserter(mbuf), "{}^", achievementInfo.unlockedComponentStatusBitField.GetElement(index));

		if (achievementInfo.achievementState == AchievementComplete)
			fmt::format_to(std::back_inserter(mbuf), "{:d}^", achievementInfo.completionTimestamp);

		for (int index = 0; index < achievementInfo.completionComponentCounts.GetLength(); ++index)
			fmt::format_to(std::back_inserter(mbuf), "{}^", achievementInfo.completionComponentCounts[index]);
		for (int index = 0; index < achievementInfo.indirectComponentCounts.GetLength(); ++index)
			fmt::format_to(std::back_inserter(mbuf), "{}^", achievementInfo.indirectComponentCounts[index]);
		for (int index = 0; index < achievementInfo.unlockedComponentCounts.GetLength(); ++index)
			fmt::format_to(std::back_inserter(mbuf), "{}^", achievementInfo.unlockedComponentCounts[index]);

		snprintf(Buffer, BufferSize, "%c%d%.*s'%s%c", ITEM_TAG_CHAR, ETAG_ACHIEVEMENT, static_cast<int>(mbuf.size()), mbuf.data(),
			achievement->name.c_str(), ITEM_TAG_CHAR);
	}
}

bool ParseItemLink(std::string_view link, ItemLinkInfo& linkInfo)
{
	// If we were given a full link, then break it down into just the data portion
	// (excluding the name).
	if ((int)link.length() > TagSizes[ETAG_ITEM] - 3)
	{
		if (link[0] == ITEM_TAG_CHAR)
		{
			TextTagInfo tagInfo = ExtractLink(link);
			if (tagInfo.tagCode != ETAG_ITEM)
				return false;

			std::string_view linkData = tagInfo.link.substr(2);
			link = linkData.substr(0, tagInfo.text.data() - linkData.data());

			linkInfo.itemName = tagInfo.text;
		}
		else
		{
			return false;
		}
	}

	// Validate size of link.
	if (link.length() != TagSizes[ETAG_ITEM] - 3)
		return false;

	const char* data = link.data();
	int ch = 0;

	ch += sscanf_s(data, "%5X", &linkInfo.itemID); data += 5;
	for (int i = 0; i < MAX_AUG_SOCKETS; ++i)
	{
		ch += sscanf_s(data, "%5X", &linkInfo.sockets[i]); data += 5;
	}

	int isEvolving = 0;
	ch += sscanf_s(data, "%1d", &isEvolving); data += 1;
	linkInfo.isEvolving = (isEvolving != 0);
	ch += sscanf_s(data, "%4X", &linkInfo.evolutionGroup); data += 4;
	ch += sscanf_s(data, "%2X", &linkInfo.evolutionLevel); data += 2;
	ch += sscanf_s(data, "%5X", &linkInfo.ornamentationIconID); data += 5;
	ch += sscanf_s(data, "%8X", &linkInfo.itemHash);

	// count number of items returned.
	return ch == (MAX_AUG_SOCKETS) + 6;
}

static int TagCodeToWndNotification(ETagCodes tagCode)
{
	switch (tagCode)
	{
	case ETAG_ACHIEVEMENT:
		return XWM_ACHIEVEMENTLINK;
	case ETAG_DIALOG_RESPONSE:
		return XWM_DIALOGRESPONSELINK;
	case ETAG_FACTION:
		return XWM_FACTION_LINK;
	case ETAG_ITEM:
		return XWM_LINK;
	case ETAG_SPELL:
		return XWM_SPELL_LINK;
	default: break;
	}

	return 0;
}

bool ExecuteTextLink(const TextTagInfo& link)
{
	if (!pChatManager)
		return false;

	int notif = TagCodeToWndNotification(link.tagCode);
	if (notif == 0)
		return false;

	for (CChatWindow* pWnd : pChatManager->ChannelMap)
	{
		if (pWnd)
		{
			std::string_view linkCode = link.link.substr(2, link.text.data() - link.link.data() - 2);

			// strip the \x12 and the text portion
			char szTempLink[MAX_STRING];
			sprintf_s(szTempLink, "%.*s", static_cast<int>(linkCode.size()), linkCode.data());

			pWnd->WndNotification(pWnd->OutputWnd, notif, szTempLink);
			return true;
		}
	}

	return false;
}

char* StripTextLinks(char* szText)
{
	TextTagInfo itemTags[MAX_EXTRACT_LINKS];
	size_t linkCount = ExtractLinks(szText, itemTags, MAX_EXTRACT_LINKS);
	if (linkCount == 0) // nothing to strip
		return szText;

	size_t stringLength = strlen(szText);
	size_t pos = 0;                   // source copy position
	size_t dest = 0;                  // dest copy position

	// holds pointer to the end of the previous link.
	const char* prevLinkEnd = szText;

	// start at the first link and go from there
	for (size_t i = 0; i < linkCount; ++i)
	{
		TextTagInfo& tagInfo = itemTags[i];

		// position of the link
		const char* erasePos = tagInfo.link.data();
		size_t skipAmount = tagInfo.link.size();
		prevLinkEnd = erasePos + skipAmount;

		int forwardDistance = static_cast<int>(erasePos - szText) - static_cast<int>(pos);

		// if we have to move our cursor forward, do it now.
		if (forwardDistance > 0)
		{
			// the cursor don't align, so copy bytes from source to dest.
			if (pos != dest)
			{
				memcpy(szText + dest, szText + pos, forwardDistance);
			}

			dest += forwardDistance;
			pos += forwardDistance;
		}

		size_t copySize = tagInfo.text.size();

		// copy text from link.
		memcpy(szText + dest, tagInfo.text.data(), copySize);

		dest += copySize;
		pos += skipAmount;
	}

	// Copy anything else after the last link. This will also null terminate.
	strcpy_s(szText + dest, stringLength + 1, prevLinkEnd);

	return szText;
}

} // namespace eqlib

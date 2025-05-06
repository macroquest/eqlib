/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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

#pragma once

#include "eqlib/Common.h"

namespace eqlib {

/**
 * Event parameters for OnChatMessage.
 */
struct ChatMessageParams
{
	/** The chat message. Contains the full original message without any percent replacements or escaping. */
	const char* chatMessage;

	/**
	 * The message's chat color. Chat colors are used to identify message categories. A full list of
	 * chat color values can be found in ChatFilters.h (i.e. USERCOLOR_SAY, etc.)
	 */
	uint32_t chatColor;

	/** If true, the message will be logged to the eq log file. */
	bool allowLog;

	/** If true, the message will undergo percent conversion (e.g. %t -> target) */
	bool doPercentConversion;

	/**
	 * If true, special STML characters will be replaced with their escape sequences.
	 *
	 * ROF2 clients do not support this flag and always escape STML characters.
	 */
	bool makeStmlSafe;
};

/**
 * Event parameters for OnTellWindowMessage.
 */
struct TellWindowMessageParams
{
	/** The chat message. Includes only the body of the message. */
	const char* messageBody;

	/** The sender of the message. */
	const char* senderName;

	/**
	 * The name of the other player in the conversation. Will be the same as the
	 * sender for incoming messages.
	 */
	const char* conversationName;

	/**
	 * The message's chat color. Chat colors are used to identify message categories. A full list of
	 * chat color values can be found in ChatFilters.h (i.e. USERCOLOR_SAY, etc.)
	 */
	uint32_t chatColor;

	/** If true, the message will be logged to the eq log file. */
	bool allowLog;
};

/**
 * Event parameters for OnUniversalChatMessage.
 */
struct UniversalChatMessageParams
{
	/**
	 * Name of the player
	 */
	const char* playerName;

	/**
	 * Name of the channel
	 */
	const char* channelName;

	/**
	 * Channel number
	 */
	int channelNumber;

	/**
	 * True if entering the channel. False if leaving.
	 */
	bool isEntering;
};

/**
 * Event parameters for OnIncomingNetworkMessage
 */
struct IncomingNetworkMessageParams
{
	
};

/**
 * Event interface for the client. This interface is used to receive events from eqlib
 */
class EventInterface
{
public:
	virtual ~EventInterface() {}

	/**
	 * Event that occurs when a standard chat message is received by the client.
	 * The receiver can modify the parametesr or filter the message out by returning true.
	 *
	 * Requires that chat filtering is enabled in configuration.
	 */
	virtual bool OnChatMessage(ChatMessageParams& params)
	{
		UNUSED(params);
		return false;
	}

	/**
	 * Event that occurs when a message is received through a tell window
	 * The receiver can modify the parametesr or filter the message out by returning true.
	 *
	 * Requires that chat filtering is enabled in configuration.
	 */
	virtual bool OnTellWindowMessage(TellWindowMessageParams& params)
	{
		UNUSED(params);
		return false;
	}

	/**
	 * Event that occurs when a player joins/leaves a universal chat channel.
	 *
	 * Requires that chat filtering is enabled in configuration.
	 */
	virtual void OnUniversalChatNotification(UniversalChatMessageParams& params)
	{
		UNUSED(params);
	}

	/**
	 * Event that occurs when an incoming message is received on an udp connection.
	 * The receiver 
	 *
	 * Requires that incoming network message events are enabled in configuration.
	 */
	virtual bool OnIncomingNetworkMessage(IncomingNetworkMessageParams& params)
	{
		UNUSED(params);
		return false;
	}
};




} // namespace eqlib

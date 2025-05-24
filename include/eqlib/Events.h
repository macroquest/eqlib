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

class EQGroundItem;
class PlayerClient;

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
struct IncomingWorldMessageParams
{
	// NYI
};

/**
 * Event interface for the client. This interface is used to receive events from eqlib
 */
class EventInterface
{
public:
	virtual ~EventInterface() {}

	/**
	 * Event that occurs every frame.
	 */
	virtual void OnProcessFrame()
	{
	}

	/**
	 * Event that occurs when the game state changes
	 */
	virtual void OnGameStateChanged(int newGameState)
	{
		UNUSED(newGameState);
	}

	/**
	 * Event that occurs when the game has entered the login frontend of the client. This is when it would
	 * be most appropriate to handle any kind of initialization that is specific to the login flow.
	 */
	virtual void OnLoginFrontendEntered()
	{
	}

	/**
	 * Event that occurs when the game has left the login frontend of the client. This will occur just prior
	 * to entering the character select screen. This is when it would be most appropriate to handle any kind of
	 * tear down form the login flow.
	 */
	virtual void OnLoginFrontendExited()
	{
	}

	/**
	 * Event that occurs when the SIDL UI system has loaded. This is when it would be most appropriate
	 * to create new UI windows.
	 *
	 * Requires that UI system events are enabled in configuration.
	 */
	virtual void OnCreateUI()
	{
	}

	/**
	 * Event that occurs when the SIDL UI system is about to be destroyed. This is when it would be most
	 * appropriate to tear down any UI windows that were created.
	 *
	 * Requires that UI system events are enabled in configuration.
	 */
	virtual void OnDestroyUI()
	{
	}

	/**
	 * Event that occurs when the player is about to zone. This is a good time to perform any zone-specific
	 * cleanup prior to loading the new zone.
	 */
	virtual void OnPreZoneUI()
	{
	}

	/**
	 * Event that occurs when the player has finished zoning. This is a good time to perform any zone-specific
	 * initialization after entering a new zone.
	 */
	virtual void OnPostZoneUI()
	{
	}

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
	 * The receiver can modify the parameters or filter the message out by returning true.
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
	 * Event that occurs when a world message is received on an udp connection.
	 *
	 * Requires that world message events are enabled in configuration.
	 */
	virtual bool OnIncomingWorldMessage(IncomingWorldMessageParams& params)
	{
		UNUSED(params);
		return false;
	}

	/**
	 * Event that occurs when a new PlayerClient ("Spawn") is created and added to the world.
	 *
	 * Requires actor events to be enabled in configuration.
	 */
	virtual void OnSpawnAdded(PlayerClient* player)
	{
		UNUSED(player);
	}

	/**
	 * Event that occurs when a PlayerClient ("Spawn") is removed from the world.
	 *
	 * Requires actor events to be enabled in configuration.
	 */
	virtual void OnSpawnRemoved(PlayerClient* player)
	{
		UNUSED(player);
	}

	/*
	 * Event that occurs when a ground item is added to the world.
	 *
	 * Requires actor events to be enabled in configuration.
	 */
	virtual void OnGroundItemAdded(EQGroundItem* groundItem)
	{
		UNUSED(groundItem);
	}

	/*
	 * Event that occurs when a ground item is removed from the world.
	 *
	 * Requires actor events to be enabled in configuration.
	 */
	virtual void OnGroundItemRemoved(EQGroundItem* groundItem)
	{
		UNUSED(groundItem);
	}
};




} // namespace eqlib

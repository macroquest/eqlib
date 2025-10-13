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

namespace UdpLibrary
{
	class UdpConnection;
}

struct ChatMessageParams;
struct TellWindowMessageParams;
struct WorldMessageParams;

/**
 * Event parameters for OnReloadGameUI
 */
struct ReloadUIParams
{
	/**
	 * True if ini should be used to restore the UI state. Will be false if user requests
	 * something like /loadskin default 0 to reset the ui.
	 */
	bool loadIni;

	/**
	 * On LS clients, this is true when the UI is being refreshed during a persona switch. Otherwise,
	 * it will be false.
	 */
	bool fastReload;
};


/** Handler type for re-sending ChatMessageParams */
using ChatMessageHandler = void(*)(const ChatMessageParams&);

/**
 * Event parameters for OnChatMessage.
 */
struct ChatMessageParams
{
	/** The chat message. Contains the full original message without any percent replacements or escaping. */
	const char* message;

	/**
	 * The message's chat color. Chat colors are used to identify message categories. A full list of
	 * chat color values can be found in ChatFilters.h (i.e. USERCOLOR_SAY, etc.)
	 */
	int color;

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

	/**
	 * Function that can be called to handle the chat message.
	 */
	ChatMessageHandler messageHandler = nullptr;
};

/** Handler type for re-sending the event */
using TellWindowMessageHandler = void(*)(const TellWindowMessageParams&);

/**
 * Event parameters for OnTellWindowMessage.
 */
struct TellWindowMessageParams
{
	/** The chat message. Includes only the body of the message. */
	const char* message;

	/**
	 * The message's chat color. Chat colors are used to identify message categories. A full list of
	 * chat color values can be found in ChatFilters.h (i.e. USERCOLOR_SAY, etc.)
	 */
	int color;

	/** The sender of the message. */
	const char* senderName;

	/**
	 * The name of the other player in the conversation. Will be the same as the
	 * sender for incoming messages.
	 */
	const char* conversationName;

	/** If using an alternate language, this is the language name. i.e. "Common Tongue" */
	const char* language;

	/** If true, the message will be logged to the eq log file. */
	bool allowLog;

	/**
	 * Function that can be called to handle the chat message.
	 */
	TellWindowMessageHandler messageHandler;
};

/**
 * Event parameters for OnIncomingWorldMessage and OnOutgoingWorldMessage
 */
struct WorldMessageParams
{
	/** ID of the message */
	uint32_t messageId;

	/** pointer to message data */
	uint8_t* data;

	/** Length of the message data */
	uint32_t dataLength;

	/** Connection that is handling the message */
	UdpLibrary::UdpConnection* connection;
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
	 * Event that occurs when the SIDL UI system is about to be destroyed. This is when it would be most
	 * appropriate to tear down any UI windows that were created.
	 */
	virtual void OnCleanUI()
	{
	}

	/**
	 * Event that occurs when the SIDL UI system has loaded in game. This is when it would be most appropriate
	 * to create new UI windows for in game.
	 */
	virtual void OnReloadUI(const ReloadUIParams& params)
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
	 *
	 * To block this message from being received by the client, return false. To modify
	 * or replace the contents of this message, either modify the parameters, or call
	 * the `handleMessage` function with the modified parameters.
	 *
	 * Requires that chat filtering is enabled in configuration.
	 */
	virtual bool OnChatMessage(ChatMessageParams& params)
	{
		UNUSED(params);
		return true;
	}

	/**
	 * Event that occurs when a message is received through a tell window
	 *
	 * To block this message from being received by the client, return false. To modify
	 * or replace the contents of this message, either modify the parameters, or call
	 * the `handleMessage` function with the modified parameters.
	 *
	 * Requires that chat filtering is enabled in configuration.
	 */
	virtual bool OnTellWindowMessage(TellWindowMessageParams& params)
	{
		UNUSED(params);
		return true;
	}

	/**
	 * Event that occurs when a world message is received on a world connection.
	 *
	 * Requires that world message events are enabled in configuration. Return false to
	 * cancel the message.
	 */
	virtual bool OnIncomingWorldMessage(WorldMessageParams& params)
	{
		UNUSED(params);
		return true;
	}

	/**
	 * Event that occurs when a world message is sent on a world connection.
	 *
	 * Requires that world message events are enabled in configuration. Return false
	 * to cancel the message.
	 */
	virtual bool OnOutgoingWorldMessage(WorldMessageParams& params)
	{
		UNUSED(params);
		return true;
	}

	/**
	 * Event that occurs when a new PlayerClient ("Spawn") is created and added to the world.
	 *
	 * Requires spawn events to be enabled in configuration.
	 */
	virtual void OnSpawnAdded(PlayerClient* player)
	{
		UNUSED(player);
	}

	/**
	 * Event that occurs when a PlayerClient ("Spawn") is removed from the world.
	 *
	 * Requires spawn events to be enabled in configuration.
	 */
	virtual void OnSpawnRemoved(PlayerClient* player)
	{
		UNUSED(player);
	}

	/*
	 * Event that occurs when a ground item is added to the world.
	 *
	 * Requires spawn events to be enabled in configuration.
	 */
	virtual void OnGroundItemAdded(EQGroundItem* groundItem)
	{
		UNUSED(groundItem);
	}

	/*
	 * Event that occurs when a ground item is removed from the world.
	 *
	 * Requires spawn events to be enabled in configuration.
	 */
	virtual void OnGroundItemRemoved(EQGroundItem* groundItem)
	{
		UNUSED(groundItem);
	}

	/*
	 * Event that occurs when eqmain.dll is loaded or unload
	 */
	virtual void OnEQMainDllLoadedStateChanged(bool loaded)
	{
		UNUSED(loaded);
	}
};

} // namespace eqlib

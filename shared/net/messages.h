#pragma once

#include <slikenet/MessageIdentifiers.h>

enum ePacketID : unsigned short
{
	// Engine ID Packet
	ID_ENGINE_PACKET_TYPE = ID_USER_PACKET_ENUM,

	// Engine Packets ID
	ID_CHAT_MESSAGE,
	ID_PLAYER_LIST,
	ID_PLAYER_JOINED,
	ID_PLAYER_LEFT,
	ID_PLAYER_DESTROY,
	ID_PLAYER_INFO,
	ID_PLAYER_CHANGE_NAME,
	ID_ENABLE_ENEMY_AI,
	ID_ENEMY_INFO,
	ID_DAMAGE_ENEMY,
	ID_DAMAGE_PLAYER,
	ID_RENDER_LIGHT,
	ID_PLAY_AUDIO,
	ID_STOP_AUDIO,
	ID_CREATE_WATER_SPLASH,
	ID_SET_ENTITY_ACTIVE,
	ID_DESTROY_GLASS_WINDOW,
	ID_FLIP_ROOM,
	ID_SET_ACTIVATION_FLAGS,
	ID_VEHICLE_INFO,
	ID_CREATE_BOAT_WATER_SPLASH,
};
#ifndef _GAME_ENGINE_DEFAULT_H_
#define _GAME_ENGINE_DEFAULT_H_

// Utilities header
#include <UtilitiesDefault.h>

#include "Utilities/GameEngineTypes.h"

#define DEFAULT_NAME			"No Name"

namespace GameEngine
{
	const UINT8 MAX_SFX = 10;

	const UINT8 DEFAULT_RED = 0;
	const UINT8 DEFAULT_BLUE = 0;
	const UINT8 DEFAULT_GREEN = 0;
	const UINT8 MAX_AUDIO_CHANNEL = 32;

	const UINT16 DEFAULT_WINDOW_WIDTH = 640;
	const UINT16 DEFAULT_WINDOW_HEIGHT = 480;

	const UINT16 DEFAULT_SPRITE_WIDTH = 10;
	const UINT16 DEFAULT_SPRITE_HEIGHT = 10;

	// Debug menu related
	const UINT32 DEBUG_MENU_MARGIN = 15;
	const UINT32 DEBUG_MENU_SPACE_PIXEL = 10;
	const UINT32 DEBUG_MENU_TEXT_WIDTH = 500;
	const UINT32 DEBUG_MENU_LABEL_WIDTH = 400;
	const UINT32 DEBUG_MENU_TEXT_HEIGHT = 30;

	// Networking
	const UINT32 MAX_CONNECTION = 100;
	const UINT32 NETWORK_PORT = 7000;

	const float DEFAULT_FRICTION = 0.009f;
	const float AUDIO_3D_MIN_DISTANCE = 0.5f;
	const float AUDIO_3D_MAX_DISTANCE = 0.5f;
	const float AUDIO_DISTANCE_FACTOR = 1.0f;

	const D3DCOLOR DEBUG_MENU_BACKGROUND_COLOUR = D3DCOLOR_ARGB( 128, 0, 0, 0 );
	const D3DCOLOR DEBUG_MENU_HIGHLIGHT_COLOUR = D3DCOLOR_ARGB( 128, 0, 150, 0 );
	const D3DCOLOR DEBUG_MENU_FONT_COLOUR = Utilities::WHITE;
	const D3DCOLOR DEBUG_MENU_SLIDER_BACKGROUND_COLOUR = D3DCOLOR_ARGB( 128, 100, 255, 255 );
	const D3DCOLOR DEBUG_MENU_SLIDER_FOREGROUND_COLOUR = D3DCOLOR_ARGB( 128, 255, 0, 0 );

	// UI Related
	const UINT32 SLIDER_WIDTH = 200;
	const UINT32 SLIDER_HEIGHT = 30;

	const D3DXVECTOR3 D3DXVECTOR3_ZERO = D3DXVECTOR3( 0.0f, 0.0f, 0.0f );
	const D3DXVECTOR3 D3DXVECTOR3_UP = D3DXVECTOR3( 0.0f, 1.0f, 0.0f );
	const D3DXVECTOR3 D3DXVECTOR3_DOWN = D3DXVECTOR3( 0.0f, -1.0f, 0.0f );
	const D3DXVECTOR3 D3DXVECTOR3_LEFT = D3DXVECTOR3( -1.0f, 0.0f, 0.0f );
	const D3DXVECTOR3 D3DXVECTOR3_RIGHT = D3DXVECTOR3( 1.0f, 0.0f, 0.0f );
	const D3DXVECTOR3 D3DXVECTOR3_FORWARD = D3DXVECTOR3( 0.0f, 0.0f, 1.0f );
	const D3DXVECTOR3 D3DXVECTOR3_BACKWARD = D3DXVECTOR3( 0.0f, 0.0f, -1.0f );
}

#endif	// #ifndef _GAME_ENGINE_DEFAULT_H_
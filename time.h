#pragma once
#include "SDL.h"

extern "C" __declspec(dllexport) inline int __cdecl get_ticks()
{
	return SDL_GetTicks();
}
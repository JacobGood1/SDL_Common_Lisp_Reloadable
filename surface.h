#pragma once
#include <SDL.h>

extern "C" __declspec(dllexport) inline int __cdecl fill_rect(SDL_Surface* screenSurface)
{
	return SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
}
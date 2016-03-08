#pragma once
#include <SDL.h>

extern "C" __declspec(dllexport) inline int __cdecl fill_rect(SDL_Surface* screenSurface)
{
	return SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
}

extern "C" __declspec(dllexport) inline void __cdecl blit_surface(SDL_Surface* source, SDL_Surface* destination)
{
	SDL_BlitSurface(source, NULL, destination, NULL);
}

extern "C" __declspec(dllexport) inline void __cdecl free_surface(SDL_Surface* surface)
{
	SDL_FreeSurface(surface);
}
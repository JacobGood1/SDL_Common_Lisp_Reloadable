#pragma once
#include <SDL.h>

extern "C" __declspec(dllexport) inline const char* SDLCALL __cdecl get_error()
{
	return SDL_GetError();
}

extern "C" __declspec(dllexport) inline void __cdecl delay(int amount)
{
	SDL_Delay(amount);
}
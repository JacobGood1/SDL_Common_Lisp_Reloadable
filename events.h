#pragma once
#include <SDL.h>

SDL_Event e;

extern "C" __declspec(dllexport) inline int __cdecl poll_event()
{
	
	return SDL_PollEvent(&e);
}

extern "C" __declspec(dllexport) inline int __cdecl get_event_type()
{
	return e.type;
}
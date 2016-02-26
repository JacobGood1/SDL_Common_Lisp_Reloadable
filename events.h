#pragma once

#include <SDL.h>

SDL_Event e;

extern "C" __declspec(dllexport) inline int __cdecl sdl_poll_event()
{
	
	return SDL_PollEvent(&e);
}

extern "C" __declspec(dllexport) inline int __cdecl sdl_get_event_type()
{
	return e.type;
}
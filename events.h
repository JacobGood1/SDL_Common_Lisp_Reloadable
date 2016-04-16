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

extern "C" __declspec(dllexport) inline int __cdecl get_event_key()
{
	return e.key.keysym.sym;
}

extern "C" __declspec(dllexport) inline bool __cdecl mouse_lmb()
{
	return (SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(1));
}
extern "C" __declspec(dllexport) inline bool __cdecl mouse_mmb()
{
	return (SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(2));
}
extern "C" __declspec(dllexport) inline bool __cdecl mouse_rmb()
{
	return (SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(3));
}
extern "C" __declspec(dllexport) inline bool __cdecl mouse_scroll_up()
{
	return (SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(4));
}
extern "C" __declspec(dllexport) inline bool __cdecl mouse_scroll_down()
{
	return (SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(5));
}
// SDL_Common_Lisp_Reloadable.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SDL.h"
#include "events.h"
#include "render.h"


extern "C" __declspec(dllexport) inline SDL_Surface* __cdecl get_window_surface(SDL_Window* window)
{
	return SDL_GetWindowSurface(window);
}

extern "C" __declspec(dllexport) inline int __cdecl fill_rect(SDL_Surface* screenSurface)
{
	return SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
}

extern "C" __declspec(dllexport) inline int __cdecl update_window_surface(SDL_Window* window)
{
	return SDL_UpdateWindowSurface(window);
}





extern "C" __declspec(dllexport) inline void __cdecl hide_window(SDL_Window* window)
{
	SDL_HideWindow(window);
}

extern "C" __declspec(dllexport) inline void __cdecl show_window(SDL_Window* window)
{
	SDL_ShowWindow(window);
}






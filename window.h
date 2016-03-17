#pragma once
#include <SDL.h>
#include <glew.h>

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

extern "C" __declspec(dllexport) inline void __cdecl destroy_window(SDL_Window* window)
{
	SDL_DestroyWindow(window);
}


extern "C" __declspec(dllexport) inline SDL_Surface* __cdecl get_window_surface(SDL_Window* window)
{
	return SDL_GetWindowSurface(window);
}


//misc.h

extern "C" __declspec(dllexport) inline const char* SDLCALL __cdecl get_error() 
{
	return SDL_GetError();
}

extern "C" __declspec(dllexport) inline void __cdecl delay(int amount)
{
	SDL_Delay(amount);
}
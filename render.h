#pragma once
#include <SDL.h>

extern "C" __declspec(dllexport) inline SDL_Renderer* __cdecl create_renderer(SDL_Window* window)
{
	return SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

extern "C" __declspec(dllexport) inline void __cdecl set_render_draw_color(SDL_Renderer* renderer, int red, int green, int blue, int alpha)
{
	SDL_SetRenderDrawColor(renderer, red, green, blue, alpha);
}

extern "C" __declspec(dllexport) inline void __cdecl render_clear(SDL_Renderer* renderer)
{
	SDL_RenderClear(renderer);
}

extern "C" __declspec(dllexport) inline void __cdecl render_present(SDL_Renderer* renderer)
{
	SDL_RenderPresent(renderer);
}

extern "C" __declspec(dllexport) inline void __cdecl destroy_renderer(SDL_Renderer* renderer)
{
	SDL_DestroyRenderer(renderer);
}


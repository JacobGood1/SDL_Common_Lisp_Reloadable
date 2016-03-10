#pragma once
#include <SDL.h>
#include <glew.h>

extern "C" __declspec(dllexport) inline SDL_Surface* __cdecl load_bmp(char* bmp_path)
{
	SDL_Surface* surface = SDL_LoadBMP(bmp_path);
	return surface;
}
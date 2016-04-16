#pragma once
#include <SDL.h>
#include <glew.h>

/*extern "C" __declspec(dllexport) struct Rect {
	int x;
	int y;
	int h;
	int w;
};*/


//RECT
extern "C" __declspec(dllexport) SDL_Rect* __cdecl new_rect(int x, int y, int w, int h)
{
	SDL_Rect* rect = new SDL_Rect();
	rect->x = x;
	rect->y = y;
	rect->w = w;
	rect->h = h;

	return rect;
}

extern "C" __declspec(dllexport) void __cdecl delete_rect(SDL_Rect* rect)
{
	delete rect;
	rect = NULL;
}

//getter
extern "C" __declspec(dllexport) int __cdecl rect_get_x(SDL_Rect* rect) 
{
	return rect->x;
}
extern "C" __declspec(dllexport) int __cdecl rect_get_y(SDL_Rect* rect)
{
	return rect->y;
}
extern "C" __declspec(dllexport) int __cdecl rect_get_w(SDL_Rect* rect)
{
	return rect->w;
}
extern "C" __declspec(dllexport) int __cdecl rect_get_h(SDL_Rect* rect)
{
	return rect->h;
}

//setter
extern "C" __declspec(dllexport) SDL_Rect* __cdecl rect_set_x(SDL_Rect* rect, int value)
{
	rect->x = value;
	return rect;
}
extern "C" __declspec(dllexport) SDL_Rect* __cdecl rect_set_y(SDL_Rect* rect, int value)
{
	rect->y = value;
	return rect;
}
extern "C" __declspec(dllexport) SDL_Rect* __cdecl rect_set_w(SDL_Rect* rect, int value)
{
	rect->w = value;
	return rect;
}
extern "C" __declspec(dllexport) SDL_Rect* __cdecl rect_set_h(SDL_Rect* rect, int value)
{
	//SDL_Point
	rect->h = value;
	return rect;
}

//POINT
extern "C" __declspec(dllexport) SDL_Point* __cdecl new_point(int x, int y)
{
	SDL_Point* point = new SDL_Point();
	point->x = x;
	point->y = y;

	return point;
}

extern "C" __declspec(dllexport) void __cdecl delete_point(SDL_Point* point)
{
	delete point;
	point = NULL;
}
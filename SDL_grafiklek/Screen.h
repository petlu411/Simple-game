#pragma once
//#include"SDL.h"
#include<iostream>
#include <SDL2/SDL.h>

class Screen
{
public:
	static const int SCREEN_WIDTH = 800;
	static const int SCREEN_HEIGHT = 600;
private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;
public:
	Screen();
	bool init();
	bool processEvents();
	void boxBlur();
	void close();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	~Screen();
};


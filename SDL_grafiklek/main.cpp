#include <SDL.h>
#include <iostream>
#include"Screen.h"
#include<stdio.h>
using namespace std;

int main(int argc, char ** argv)
{

	Screen screen;
	if (screen.init() == false){
		cout << "Error initialising SDL. " << endl;
	}
	//Set screen Black
	for (int y = 0; y < Screen::SCREEN_HEIGHT; y++){
		for (int x = 0; x < Screen::SCREEN_WIDTH; x++){
			screen.setPixel(x, y, 0, 0, 0);//RGB
		}
	}
	screen.update();

	//Set board top
	for (int y = 0; y < 50; y++){
		for (int x = 0; x < Screen::SCREEN_WIDTH; x++){
			screen.setPixel(x, y, 51, 102, 0);//RGB
		}
	}


	//Set board bot
	for (int y = Screen::SCREEN_HEIGHT-50; y < Screen::SCREEN_HEIGHT; y++){
		for (int x = 0; x < Screen::SCREEN_WIDTH; x++){
			screen.setPixel(x, y, 51, 102, 0);//RGB
		}
	}


	screen.update();
	SDL_Delay(10000);

	screen.close();
	SDL_Quit();

	return 0;
}
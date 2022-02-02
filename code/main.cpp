#include <SDL2/SDL.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	SDL_Window *MainWindow;
	SDL_Surface *MainSurface;
	if(!(MainWindow = SDL_CreateWindow("Tower Defense", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 20*32+500, 25*32, 0))){ //1140*800 window
		std::cout << "Couldn't create SDL Window";
		exit(1);
	}
	if(!(MainSurface = SDL_GetWindowSurface(MainWindow))){
		std::cout << "Couldn't get SDL Window-Surface";
		exit(1);
	}
	SDL_Delay(2000);

}
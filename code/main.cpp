#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keyboard.h>
#include <SDL2/SDL_keycode.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_scancode.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_image.h>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include "global_defs.hpp"
#include "map.hpp"
namespace glb = game_globals;
using namespace std;
int main(){
	//PlayArea* PL = new PlayArea(); // placeholder initializer
	SDL_Window *MainWindow;
	SDL_Surface *MainSurface;
	if(!(MainWindow = SDL_CreateWindow("Tower Defense", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, glb::WindowWidth, glb::WindowHeight, 0))){ //1140*800 window
		std::cout << "Couldn't create SDL Window";
		exit(1);
	} 
	if(!(MainSurface = SDL_GetWindowSurface(MainWindow))){
		std::cout << "Couldn't get SDL Window-Surface";
		exit(1);
	}

	
	SDL_Rect rect; rect.h = 32; rect.w = 32;
		rect.y =glb::WindowHeight / 2 - glb::TileSize/2;
		rect.x = glb::WindowWidth / 2 - glb::TileSize/2;
	SDL_Surface *surf = IMG_Load("assets/Tiles/grass.png");
	if (surf == 0) {
	cout << "ERROR WITH OPENING FILE";
	}

	#pragma region KeyControls
		Uint8 const *keys;
	
	for (bool exit = 0; !exit;) {
		SDL_BlitScaled(surf, NULL, MainSurface, &rect);
		
		SDL_UpdateWindowSurface(MainWindow);
		SDL_PumpEvents();
		keys = SDL_GetKeyboardState(NULL);
		if (keys[SDL_SCANCODE_A] == 1) {
			exit = 1;
		}
	}
	#pragma endregion
	SDL_Delay(200);

}
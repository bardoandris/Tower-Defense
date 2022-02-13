#include "drawing.hpp"
#include "global_defs.hpp"
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_surface.h>
#include <boost/filesystem/directory.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem.hpp>
#include <iostream>
#include <string>
#include <utility>
using namespace boost::filesystem;

std::map<std::string, SDL_Surface*> InitTiles(){
	SDL_Surface *surface;
	std::string filename;
	std::map<std::string, SDL_Surface*> Definitions;
	directory_iterator DI(path("./assets/Tiles")), endIT;
	for (; DI != endIT; DI++) {
	filename = DI->path().string().substr(0, DI->path().string().find('.'));
	surface = IMG_Load(DI->path().string().c_str());
	Definitions.insert(std::pair<std::string, SDL_Surface*>(filename, surface));
	}
	
	return Definitions;
};


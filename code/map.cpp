#include "map.hpp"
#include <SDL2/SDL_surface.h>
#include <boost/filesystem/path.hpp>
#include <vector>
#include <string>
#include <boost/filesystem.hpp>


PlayArea::PlayArea(){ // TODO STATIC PLAYAREA SIZE!!
	map = new std::vector< //Init 20 vectors of MapCell, 20 Cell within each
		std::vector<MapCell>>(20, std::vector<MapCell>(20, MapCell()));
	
	for (auto iter = map->begin(); iter != map->end(); iter++) {
		iter->resize(20);
		for (auto iterCell = iter->begin(); iterCell != iter->end(); iterCell++) {
		
		}
	}
}

MapCell::MapCell(SDL_Surface *img){
	IMG = img;
};

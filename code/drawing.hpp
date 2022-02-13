#include"map.hpp"
#include <SDL2/SDL_surface.h>
#include <map>
#include <string>
int DrawPlayArea(PlayArea *map);
int DrawSideBar(Player *player);
std::map<std::string, SDL_Surface*> InitTiles();
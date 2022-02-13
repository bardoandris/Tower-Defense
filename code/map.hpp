#include <SDL2/SDL_surface.h>
#include <string>
#include <vector>
#include "player.hpp"
/*struct TerrainPoperties{
	bool IsPassable, ShootThrough;
	int Health;
};*/ // Maybe better implemented with a class instead -- think JSON deserealizing, maybe wall types should be a class



class MapCell{
	public:
	Entity* entity;
	MapCell();
	MapCell(SDL_Surface *img);
	
	private:
	SDL_Surface *IMG;
	std::vector<MapCell*> Neighbours;

};
class PlayArea{
	public:
	PlayArea(int diff);
	PlayArea(std::string mapfile);
	PlayArea();
	private:
	std::vector<std::vector<MapCell>>* map;

};
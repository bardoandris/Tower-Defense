#include <string>
#include <vector>
#include "player.hpp"
class MapCell{
	public:
	Entity* entity;
	MapCell(){};
	MapCell(Entity ent);
	
	private:
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
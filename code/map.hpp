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
	MapCell(Entity ent);
	
	private:
	//TerrainPoperties TP;
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
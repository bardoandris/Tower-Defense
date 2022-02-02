#include "map.hpp"
#include <vector>

MapCell InitCell();

PlayArea::PlayArea(int diff){
	map = new std::vector< //Init 20 vectors of MapCell, 20 Cell within each
		std::vector<MapCell>>(20, std::vector<MapCell>(20, InitCell()));
	
	for (auto iter = map->begin(); iter != map->end(); iter++) {
		iter->resize(20)
		for (auto iterCell = iter->begin(); iterCell != iterCell->end(); iterCell++) {
		
		}
	}
}
MapCell InitCell(){
	MapCell MP;
	return MP;
}
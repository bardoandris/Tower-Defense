#include "map.hpp"
#include <boost/filesystem/path.hpp>
#include <vector>
#include <string>
#include <boost/filesystem.hpp>

MapCell InitCell();

PlayArea::PlayArea(int diff){ // TODO STATIC PLAYAREA SIZE!!
	map = new std::vector< //Init 20 vectors of MapCell, 20 Cell within each
		std::vector<MapCell>>(20, std::vector<MapCell>(20, InitCell()));
	
	for (auto iter = map->begin(); iter != map->end(); iter++) {
		iter->resize(20);
		for (auto iterCell = iter->begin(); iterCell != iter->end(); iterCell++) {
		
		}
	}
}
MapCell InitCell(){
	MapCell MP;
	return MP;
}
bool SetUpPlayArea(){

};

bool SetUpPlayArea(boost::filesystem::path Path){

};

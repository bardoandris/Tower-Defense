#include "loader.hpp"
#include <SDL2/SDL_surface.h>
#include <boost/filesystem/directory.hpp>
#include <boost/filesystem/path.hpp>
#include <map>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <boost/filesystem.hpp>
#include <utility>
namespace bfs = boost::filesystem;
std::map<std::string, SDL_Surface*> * LoadAssets(){
	std::map<std::string, SDL_Surface*> *Returnmap = new std::map<std::string, SDL_Surface*>;
	bfs::path AssetPath("assets");
	bfs::directory_iterator EndIterator, DirIterator(AssetPath);
	std::string Temp_PathName;

	for (; DirIterator != EndIterator; DirIterator++) {
		Temp_PathName = DirIterator->path().string();
		Returnmap->insert(std::pair<std::string, SDL_Surface*>	(Temp_PathName, IMG_Load(Temp_PathName.c_str())));
	}
	return Returnmap;
}

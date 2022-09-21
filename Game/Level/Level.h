#pragma once
#include "Map/Map.h"

class Level {
public:
	Level();
	~Level();
private:
	const char* savePath;
	Map* map;
};
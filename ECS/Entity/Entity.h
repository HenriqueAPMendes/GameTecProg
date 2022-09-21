#pragma once
#include "../Components/ComponentsList/ComponentsList.h"

class Entity {
protected:
	//componentsList
	virtual void update() = 0;
	virtual void render() = 0;
};
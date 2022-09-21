#pragma once
#include "../Entity.h"
#include "EventController.h"

class Player : public Entity {
public:
	Player();
	~Player();

	void update();
	void render();
private:
	void init();
	//EventController eventController
};
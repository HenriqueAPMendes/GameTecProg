#pragma once

#include "../Component.h"
#include <SDL.h>

class ColliderComponent : public Component {
public:
	ColliderComponent() {
		colRect = { 0,0,0,0 };
	}
	~ColliderComponent() {}

	void update() {}
private:
	SDL_Rect colRect;
};
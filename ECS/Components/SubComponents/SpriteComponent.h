#pragma once

#include "../Component.h"
#include <SDL.h>

class SpriteComponent : public Component {
	SpriteComponent() { texture = nullptr; }
	~SpriteComponent() {}

	void update() {}
	void render() {}

private:
	SDL_Texture* texture;
};
#pragma once

#include "../Component.h"
#include "../Vector2D/Vector2D.h"

class TransformComponent : public Component {
public:
	TransformComponent() {}
	~TransformComponent() {}

	void update() {}
private:
	Vector2D position;
	Vector2D velocity;
};
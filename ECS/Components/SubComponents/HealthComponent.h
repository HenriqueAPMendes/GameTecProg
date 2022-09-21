#pragma once

#include "../Component.h"

class HealthComponent : public Component {
public:
	HealthComponent() { currentHealth = maxHealth = 0; }
	~HealthComponent() {}

	void update() {}
private:
	float currentHealth;
	float maxHealth;

};
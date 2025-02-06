#pragma once

#include "Framework/GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();;

	void update(float dt);
private:
	sf::Vector2f bounceSpeed;
	sf::Texture texture;
};


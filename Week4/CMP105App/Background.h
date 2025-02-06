#pragma once

#include "Framework/GameObject.h"

class Background : public GameObject
{
public:
	void handleInput(float dt);
private:
	sf::View view;
	sf::RectangleShape rect;
	sf::Texture background;
};


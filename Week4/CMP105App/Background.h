#pragma once

#include "Framework/GameObject.h"

class Background : public GameObject
{
public:
	Background();
	~Background();

	void handleInput(float dt);
	void setView(sf::View* newView);
	void setInput(Input* in);

private:
	Input* input;
	sf::View* view;
	sf::Texture background;
};


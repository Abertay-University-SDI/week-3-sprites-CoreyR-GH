#pragma once

#include "Framework/GameObject.h"

class Cursor : public GameObject
{
public:
	Cursor();
	~Cursor();

	void setInput(Input* in);
	void update(float dt);
	void setWindowAndView(sf::RenderWindow* tWindow, sf::View* tView);

	sf::Texture texture;
	sf::Texture altTexture;
private:
	sf::RenderWindow* window;
	sf::View* view;
};


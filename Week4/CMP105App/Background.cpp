#include "Background.h"
#include <iostream>

void Background::setView(sf::View* newView)
{
	view = newView;
}

void Background::setInput(Input* in)
{
	input = in;
}

sf::RectangleShape Background::getRect()
{
	return rect;
}

Background::Background()
{
	view = nullptr;
	input = nullptr;
	rect.setSize(sf::Vector2f(11038,675));
}

Background::~Background()
{
}

void Background::handleInput(float dt)
{
	float screenEdgeLeft = view->getCenter().x - view->getSize().x;
	float screenEdgeRight = view->getCenter().x + view->getSize().x;
	
	
	if (input->isKeyDown(sf::Keyboard::A) &&
		-screenEdgeLeft < rect.getGlobalBounds().left + view->getSize().x / 2)
	{
		view->move(sf::Vector2f(-1100, 0) * dt);
	}

	if (input->isKeyDown(sf::Keyboard::D) &&
		screenEdgeRight < rect.getGlobalBounds().left + rect.getGlobalBounds().width + view->getSize().x / 2)
	{
		view->move(sf::Vector2f(1100, 0) * dt);
	}
}



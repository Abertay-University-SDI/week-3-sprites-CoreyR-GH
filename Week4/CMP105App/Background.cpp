#include "Background.h"

void Background::handleInput(float dt)
{
	float screenEdgeLeft = view.getCenter().x - view.getSize().x;
	float screenEdgeRight = view.getCenter().x + view.getSize().x;

	if (input->isKeyDown(sf::Keyboard::A) &&
		-screenEdgeLeft < rect.getGlobalBounds().left + view.getSize().x / 2)
	{
		view.move(sf::Vector2f(-1100, 0) * dt);
	}

	if (input->isKeyDown(sf::Keyboard::D) &&
		screenEdgeRight < rect.getGlobalBounds().left + rect.getGlobalBounds().width + view.getSize().x / 2)
	{
		view.move(sf::Vector2f(1100, 0) * dt);
	}
}

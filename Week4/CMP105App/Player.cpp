#include "Player.h"
#include <iostream>

Player::Player() 
{
	texture.loadFromFile("gfx/Mushroom.png");
	setTexture(&texture);
	setSize(sf::Vector2f(100, 100));
	setPosition(100, 100);
	
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W)) 
	{
		setVelocity(getVelocity().x, -200);
	}

	if (input->isKeyDown(sf::Keyboard::S))
	{
		setVelocity(getVelocity().x, 200);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		setVelocity(-200, getVelocity().y);
	}

	if (input->isKeyDown(sf::Keyboard::D))
	{
		setVelocity(200, getVelocity().y);
	}

	if (!input->isKeyDown(sf::Keyboard::W) &&
		!input->isKeyDown(sf::Keyboard::S) &&
		!input->isKeyDown(sf::Keyboard::A) &&
		!input->isKeyDown(sf::Keyboard::D))
	{ 
		setVelocity(0, 0); 
	}
	
	move(velocity * dt);
}

void Player::update(float dt)
{
}

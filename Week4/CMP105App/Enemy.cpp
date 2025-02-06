#include "Enemy.h"

Enemy::Enemy()
{
	setSize(sf::Vector2f(100, 100));
	bounceSpeed = sf::Vector2f(200,200);
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
	move(bounceSpeed.x * dt, bounceSpeed.y * dt);
	if (getPosition().x + getSize().x > window->getSize().x || getPosition().x < 0)
	{
		bounceSpeed.x = -bounceSpeed.x;
	}

	if (getPosition().y + getSize().y > window->getSize().y || getPosition().y < 0)
	{
		bounceSpeed.y = -bounceSpeed.y;
	}

}

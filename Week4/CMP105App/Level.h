#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include "Background.h"
#include <string.h>
#include <iostream>


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	// Level objects
	GameObject testSprite;
	sf::Texture texture;
	sf::Texture textureGoomba;
	sf::Texture textureDuck;
	sf::Texture textureCar;
	sf::Texture textureCity;
	sf::Texture textureBall;
	sf::Texture textureLevel1;

	Player player;
	Background bg;
	Enemy enemy;
	Enemy enemy2;

	GameObject duck;
	GameObject car;
	sf::View view;
	GameObject city;
};
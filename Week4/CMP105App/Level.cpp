#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	textureDuck.loadFromFile("gfx/coolDuck.png");
	textureBall.loadFromFile("gfx/Beach_Ball.png");
	textureGoomba.loadFromFile("gfx/Goomba.png");
	level1.loadFromFile("gfx/Level1_1.png");

	bg.setTexture(&level1);
	bg.setSize(sf::Vector2f(11038, 675));

	//https://clipart-library.com/clip-art/car-cartoon-transparent-9.htm
	textureCar.loadFromFile("gfx/car.png");

	//https://craftpix.net/freebies/free-city-backgrounds-pixel-art/?num=1&count=20&sq=pixel&pos=12
	textureCity.loadFromFile("gfx/city.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
	
	player.setInput(input);


	duck.setTexture(&textureDuck);
	duck.setSize(sf::Vector2f(100, 100));
	duck.setPosition(-450, 310);
	duck.setVelocity(200.0f, 0.0f);

	car.setTexture(&textureCar);
	car.setSize(sf::Vector2f(200, 200));
	car.setPosition(-500, 300);
	car.setVelocity(200.0f, 0.0f);

	city.setTexture(&textureCity);
	city.setSize(sf::Vector2f(2000, 2000));
	city.setPosition(-500, -1250);

	view = window->getView();
	//view.setCenter(sf::Vector2f(-1200, 300));

	enemy.setPosition(400, 400);
	enemy.setWindow(window);
	enemy.setTexture(&textureGoomba);

	enemy2.setPosition(800, 100);
	enemy2.setWindow(window);
	enemy2.setTexture(&textureBall);


}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	//player.handleInput(dt);

	bg.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	player.update(dt);
	enemy.update(dt);
	enemy2.update(dt);

	//car.move(car.getVelocity() * dt);
	//duck.move(duck.getVelocity() * dt);
	//view.move((car.getVelocity() * 2.0f) * dt);
	window->setView(view);
}

// Render level
void Level::render()
{
	beginDraw();

	//window->draw(testSprite);	
	//window->draw(city);
	//window->draw(duck);
	//window->draw(car);

	window->draw(bg);
	window->draw(player);
	window->draw(enemy);
	window->draw(enemy2);

	endDraw();
}

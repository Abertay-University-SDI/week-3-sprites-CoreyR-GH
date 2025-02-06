#include "Cursor.h"

Cursor::Cursor()
{
	window = nullptr;
	view = nullptr;
	input = nullptr;
	texture.loadFromFile("gfx/icon.png");
	altTexture.loadFromFile("gfx/altCursor.png");
	setSize(sf::Vector2f(100, 100));
}

Cursor::~Cursor()
{
}

void Cursor::setInput(Input* in)
{
	input = in;
}

void Cursor::update(float dt)
{
	// no clue how to keep position when view is moved
	setPosition(window->mapPixelToCoords(sf::Vector2i(input->getMouseX(), input->getMouseY()), *view));
}

void Cursor::setWindowAndView(sf::RenderWindow* tWindow, sf::View* tView)
{
	window = tWindow;
	view = tView;
}

#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

/*
	Class that actsas the game engine.
	Wrapper class.
*/

class Game
{
private:
	// Variables
	// Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;

	// Private functions
	void initVariables();
	void initWindow();

public:
	// Constructors & Destructors
	Game();
	virtual ~Game();

	// Accessors
	const bool running() const;

	// Functions
	void pollEvents();
	void update();
	void render();
};


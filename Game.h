#pragma once
#include <iostream>
#include <vector>
#include <ctime>

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

	// Mouse position
	sf::Vector2i mousePosWindow;
	sf::Vector2f mousePosView;

	// Resources
	sf::Font font;

	// Game logic
	bool endGame;
	unsigned points;
	int health;
	float enemySpawnTimer;
	float enemySpawnTimerMax;
	int maxEnemies;
	bool mouseHeld;

	// Game objects
	std::vector<sf::RectangleShape> enemies;
	sf::RectangleShape enemy;

	// Private functions
	void initVariables();
	void initWindow();
	void initFonts();
	void initEnemies();

public:
	// Constructors & Destructors
	Game();
	virtual ~Game();

	// Accessors
	const bool running() const;
	const bool getEndGame() const;

	// Functions
	void spawnEnemy();
	void pollEvents();
	void updateMousePositions();
	void updateEnemies();
	void update();

	void renderEnemies();
	void render();
};


#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
//#include <SFML/Audio.hpp>
#include "GameObjectManager.hpp"
#include "PhysicsManager.hpp"
#include "WindowManager.hpp"

#include <Windows.h>
#include <direct.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
#include <stdexcept>


using namespace sf;

class Omega
{
public:
	static void Start();
	static void Initialize();
	static RenderWindow _mainWindow;

	//static bool moveLeft;
	//static bool moveRight;
	//static bool moveUp;
	//static bool moveDown;

private:
	static void GameLoop(sf::Time time);

	enum GameState { Uninitialized, ShowingSplash, Paused, ShowingMenu, Playing, Exiting };

	static GameState _gameState;
	
	static GameObjectManager _gameObjectManager;
	static PhysicsManager _physicsManager;

	//string Player;
	//string Opponent;
};

#pragma once
#include <string>

#include "Level.h"
#include "Player.h"

class GameSystem 
{
public:
	GameSystem(const std::string& levelPath);

	void start();

private:
	Level _level;

	Player _player;
};
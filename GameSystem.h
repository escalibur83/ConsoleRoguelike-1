#pragma once
#include "Level.h"
#include "Player.h"

#include <string>

class GameSystem
{
public:
	GameSystem(const std::string& levelPath);

	void start();

private:
	Level _level;

	Player _player;
};
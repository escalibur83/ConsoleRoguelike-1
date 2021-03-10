#pragma once
#include "Player.h"

#include <string>
#include <vector>
#include <iostream>

class Level
{
public:
	Level() // default
	{
		std::cout << "Level default constructor" << std::endl;
	}

	Level(const std::string& levelPath);

	void print();

	void init(Player& player);

	void update(const Player& player);

private:
	std::vector<std::string> _levelData;
};


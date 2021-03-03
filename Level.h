#pragma once
#include "Player.h"

#include <string>
#include <vector>

class Level
{
public:
	Level(const std::string& levelPath);

	void print();

	void init(Player& player);

	void update(const Player& player);

private:
	std::vector<std::string> _levelData;
};


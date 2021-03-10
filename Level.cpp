#include "Level.h"

#include <fstream>
#include <iostream>

Level::Level(const std::string& levelPath)
	: _levelData{}
{
	std::ifstream file;
	file.open(levelPath);

	if (file.fail())
	{
		std::cout << "ERROR: failed to load file: " << levelPath << std::endl;
		return;
	}

	std::string row;
	while (std::getline(file, row))
	{
		_levelData.push_back(row);
	}

	file.close();
}

void Level::print()
{
	const size_t size{_levelData.size()};
	for (int i = 0; i < size; ++i)
	{
		std::cout << _levelData[i] << std::endl;
	}
}

void Level::init(Player& player)
{
	const size_t size{_levelData.size()};
	for (int i = 0; i < size; ++i)
	{
		const size_t str_size{_levelData[i].size()};
		for (int k = 0; k < str_size; ++k)
		{
			const char tile{_levelData[i][k]};

			switch (tile)
			{
			case '@':
				player.setPosition(i, k);
				break;
			default:
				break;
			}
		}
	}
}

void Level::update(const Player& player)
{
	const size_t size{_levelData.size()};
	for (int i = 0; i < size; ++i)
	{
		const size_t str_size{_levelData[i].size()};
		for (int k = 0; k < str_size; ++k)
		{
			const char tile{_levelData[i][k]};

			switch (tile)
			{
			case '@':
				_levelData[i][k] = '.';
				break;
			default:
				break;
			}
		}
	}

	int playerPosX;
	int playerPosY;
	player.getPosition(playerPosX, playerPosY);

	_levelData[playerPosX][playerPosY] = '@';
}

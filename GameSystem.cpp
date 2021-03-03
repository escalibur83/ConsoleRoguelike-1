#include "GameSystem.h"

#include <conio.h>

GameSystem::GameSystem(const std::string& levelPath)
	: _level(levelPath)
	, _player()
{
}

void GameSystem::start()
{
	bool isDone{ false };

	while (!isDone)
	{
		const char input = _getch();
		switch (input)
		{
		case 'w':
		case 'W':
			_player.move(-1, 0);
			break;
		case 's':
		case 'S':
			_player.move(1, 0);
			break;
		case 'a':
		case 'A':
			_player.move(0, -1);
			break;
		case 'd':
		case 'D':
			_player.move(0, 1);
			break;
		default:
			isDone = true;
			break;
		}

		_level.update(_player);

		system("CLS");
		_level.print();
	}
}

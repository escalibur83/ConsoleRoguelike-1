#include "Player.h"

Player::Player() 
	: _x(0)
	, _y(0)
{
}

void Player::init(int x, int y)
{
	_x = x;
	_y = y;
}

void Player::setPosition(const int x, const int y)
{
	_x = x;
	_y = y;
}

void Player::getPosition(int& x, int& y) const
{
	x = _x;
	y = _y;
}

void Player::move(int x, int y)
{
	_x += x;
	_y += y;
}

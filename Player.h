#pragma once

class Player
{
public:
	Player();

	void init(int x, int y);

	void setPosition(const int x, const int y);

	void getPosition(int& x, int& y) const;

	void move(const int x, const int y);

private:
	int _x; 

	int _y;
};


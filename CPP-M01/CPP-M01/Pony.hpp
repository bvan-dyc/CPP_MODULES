#pragma once
#include <string>
#include <iostream>

class Pony
{
public:
	Pony(std::string name, int speed, int endurance);
	~Pony();
private:
	std::string		_name;
	int				_speed;
	int				_endurance;
};

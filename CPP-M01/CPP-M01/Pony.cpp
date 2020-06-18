#include "Pony.hpp"

Pony::Pony(std::string name, int speed, int endurance) {
	_name = name;
	_speed = speed;
	_endurance = endurance;
	std::cout << _name << " enters the race. STATS: spd: " << _speed << " end: " << _endurance << std::endl;
}

Pony::~Pony() {
	std::cout << _name << " was destroyed." << std::endl;
}

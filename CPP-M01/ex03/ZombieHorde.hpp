#pragma once
#include <string>
#include "Zombie.hpp"

#define NAMES_COUNT 6
#define TYPES_COUNT 5

class ZombieHorde
{
public:
	ZombieHorde(int size);
	~ZombieHorde();
	void announce();
private:
	Zombie* horde;
	int		_size;
	static std::string names[NAMES_COUNT];
	static std::string types[TYPES_COUNT];
};

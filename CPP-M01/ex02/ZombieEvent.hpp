#pragma once
#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string type);
	Zombie* randomChump();
	Zombie* newZombie(std::string name);
private:
	std::string _type;
};

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}


Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie* newzombie = new Zombie(name, _type);

	return(newzombie);
}

Zombie* ZombieEvent::randomChump() {
	std::string namelist[] = { "Elliot", "Klebold", "Harris", "Jesus", "Whitman", "Charles" };
	Zombie* newzombie = newZombie(namelist[rand() % 6]);

	newzombie->announce();
	return(newzombie);
}


#include <time.h>
#include <iostream>
#include "Zombie.hpp";
#include "ZombieEvent.hpp";

int main()
{
	ZombieEvent Zevent;

	srand(time(NULL));
	Zombie	ZombieA = Zombie("Adam", "Stack");
	Zombie	ZombieB = Zombie("Eve", "Stack");
	ZombieA.announce();
	ZombieB.announce();
	Zevent.setZombieType("Heap");
	Zombie* ZombieC = Zevent.randomChump();
	Zombie* ZombieD = Zevent.randomChump();
	delete ZombieC;
	delete ZombieD;
	return(0);
}

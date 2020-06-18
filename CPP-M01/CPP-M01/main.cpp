#include <iostream>
#include "Pony.hpp"

void 	ponyOnTheHeap(std::string name, int speed, int endurance)
{
	Pony* pony = new Pony(name, speed, endurance);
	delete pony;
}

void 	ponyOnTheStack(std::string name, int speed, int endurance)
{
	Pony pony = Pony(name, speed, endurance);
}

int main()
{
	ponyOnTheHeap("Lobster Ruby", 7, 10);
	ponyOnTheStack("Octopus Garnet", 4, 7);
	return (0);
}
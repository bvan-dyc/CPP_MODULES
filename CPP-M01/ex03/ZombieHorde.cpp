#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size) : _size(size)
{
	horde = new Zombie[size];
	std::cout << "A new horde appears!";
	for (int i = 0; i < size; i++)
	{
		horde[i].setName(names[std::rand() % NAMES_COUNT]);
		horde[i].setType(types[std::rand() % TYPES_COUNT]);
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde;
}

void ZombieHorde::announce() {
	for (int i = 0; i < _size; i++)
	{
		horde[i].announce();
	}
}

std::string ZombieHorde::names[NAMES_COUNT] = { "Elliot", "Klebold", "Harris", "Whitman", "Charles", "Adam" };
std::string ZombieHorde::types[TYPES_COUNT] = { "Jiangshi", "Romero", "Pirate", "Ghoul", "Mummy" };
#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
	std::cout << _type << " Zombie \"" << _name << "\" is back from the dead." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _type << " Zombie \"" << _name << "\" was sent to Heaven." << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << " (" << _type << ") > Braiiiiiiinnnssss ..";
}

void Zombie::setName(std::string name)
{
	_name = name;
}

void Zombie::setType(std::string type)
{
	_type = type;
}

#include "Zombie.hpp"

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

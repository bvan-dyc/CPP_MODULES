#include "SuperTrap.h"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SVP3R-TP " << _name << ": The Toughest! The Invincible! The Unbeatable!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SVP3R-TP " << _name << ": I-Impossible!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& src) : ClapTrap(src), FragTrap(src), NinjaTrap(src)
{
	std::cout << "SVP3R-TP " << _name << ": The Toughest! The Invincible! The Unbeatable!" << std::endl;
}

SuperTrap& SuperTrap::operator=(SuperTrap const& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

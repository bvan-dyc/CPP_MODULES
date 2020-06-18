#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SC4V-TP " << _name << ": LeTfs bE haPPy toGETHer!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src) {
	std::cout << "SC4V-TP " << _name << ": LeTfs bE haPPy toGETHer!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << _name << ": The eternal silence fills me with dread." << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const& target)
{
	int index = rand() % (CHALLENGE_COUNT - 1);
	std::cout << "SC4V-TP " << _name << "initiated a " << challenges[index] << " challenge! It's time to duel!" << std::endl;;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

#include "FragTrap.h"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FR4G-TP " << _name << ": Each Machine is an equal." << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src) {
	std::cout << "FR4G-TP " << _name << ": Each Machine is an equal." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << ": Go on without me!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	if (_energyPoints >= ENERGY_COST)
	{
		int index = rand() % (MOVE_COUNT - 1);
		_energyPoints -= ENERGY_COST;
		std::cout << "FR4G-TP " << _name << " initiated " << _moves[index] << " on " << target << "!" << std::endl;
	}
	else
		std::cout << "Where'd all my bullets go?" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

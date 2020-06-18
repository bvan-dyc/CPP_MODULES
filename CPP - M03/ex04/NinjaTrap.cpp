#include "NinjaTrap.h"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDmg = 60;
	_rangedAttackDmg = 5;
	_armorDmgReduction = 0;
	std::cout << "N1NJ4-TP " << _name << ": Nin nin!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& src) : ClapTrap(src)
{
	std::cout << "N1NJ4-TP " << _name << ": Nin nin!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "N1NJ4-TP " << _name << ": Thus I die with pride." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& ninjaTrap) {
	std::cout << "N1NJ4-TP " << _name << ": initiating shoebox sequence on N1NJ4-TP " << ninjaTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& fragTrap) {
	std::cout << "N1NJ4-TP " << _name << ": initiating shoebox sequence on FR4G-TP" << fragTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& scavTrap) {
	std::cout << "N1NJ4-TP " << _name << ": initiating shoebox sequence on SC4V-TP" << scavTrap.getName() << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	return(*this);
}

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "CL4P-TP " << _name << ": Booting sequence complete." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
	_name = src._name;
	_level = src._level;
	_hitPoints = src._hitPoints;
	_maxHitPoints = src._maxHitPoints;
	_energyPoints = src._energyPoints;
	_maxEnergyPoints = src._maxEnergyPoints;
	_armorDmgReduction = src._armorDmgReduction;
	std::cout << "CL4P-TP " << _name << ": Booting sequence complete." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP " << _name << ": Destruction sequence complete." << std::endl;
}

void ClapTrap::rangedAttack(std::string const& target)
{
	std::cout << "CL4P-TP " << _name << " initiates a ranged attack causing " << _rangedAttackDmg << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target)
{
	std::cout << "CL4P-TP " << _name << " initiates a melee attack causing " << _meleeAttackDmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount = amount > _armorDmgReduction ? amount - _armorDmgReduction : 0;
	std::cout << "CL4P-TP " << _name << " took " << amount << " damage." << std::endl;
	_hitPoints = _hitPoints > amount ? _hitPoints - amount : 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "CL4P-TP " << _name << " was repaired for " << amount << " health." << std::endl;
	_hitPoints = _hitPoints + amount >= _maxHitPoints ? _maxHitPoints : _hitPoints + amount;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
	_name = rhs._name;
	_level = rhs._level;
	_hitPoints = rhs._hitPoints;
	_maxHitPoints = rhs._maxHitPoints;
	_energyPoints = rhs._energyPoints;
	_maxEnergyPoints = rhs._maxEnergyPoints;
	_armorDmgReduction = rhs._armorDmgReduction;
	return (*this);
}

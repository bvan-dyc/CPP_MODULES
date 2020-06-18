#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << "SC4V-TP " << _name << ": Booting sequence complete." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	_name = src._name;
	_level = src._level;
	_hitPoints = src._hitPoints;
	_maxHitPoints = src._maxHitPoints;
	_energyPoints = src._energyPoints;
	_maxEnergyPoints = src._maxEnergyPoints;
	_armorDmgReduction = src._armorDmgReduction;
	std::cout << "SC4V-TP " << _name << ": Booting sequence complete." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << _name << ": LeTfs bE haPPy toGETHer!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << _name << " initiates a ranged attack causing " << _rangedAttackDmg << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << _name << " initiates a melee attack causing " << _meleeAttackDmg << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "SC4V-TP " << _name << " took " << amount << " damage." << std::endl;
	_hitPoints = _hitPoints > amount ? _hitPoints - amount : 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP " << _name << " was repaired for " << amount << " health." << std::endl;
	_hitPoints = _hitPoints + amount >= _maxHitPoints ? _maxHitPoints : _hitPoints + amount;
}

void	ScavTrap::challengeNewcomer(std::string const& target)
{
	int index = rand() % (CHALLENGE_COUNT - 1);
	std::cout << "SC4V-TP " << _name << "initiated a " << challenges[index] << " challenge! It's time to duel!" << std::endl;;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
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

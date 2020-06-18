#include "FragTrap.h"

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "FR4G-TP " << _name << ": Each Machine is an equal." << std::endl;
}

FragTrap::FragTrap(FragTrap const& src)
{
	_name = src._name;
	_level = src._level;
	_hitPoints = src._hitPoints;
	_maxHitPoints = src._maxHitPoints;
	_energyPoints = src._energyPoints;
	_maxEnergyPoints = src._maxEnergyPoints;
	_armorDmgReduction = src._armorDmgReduction;
	std::cout << "FR4G-TP " << _name << ": Each Machine is an equal." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << ": Go on without me!" << std::endl;
}

void FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << _name << " initiates a ranged attack causing " << _rangedAttackDmg << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << _name << " initiates a melee attack causing " << _meleeAttackDmg << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << _name << " took " << amount << " damage." << std::endl;
	_hitPoints = _hitPoints > amount ? _hitPoints - amount : 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << _name << " was repaired for " << amount << " health." << std::endl;
	_hitPoints = _hitPoints + amount >= _maxHitPoints ? _maxHitPoints : _hitPoints + amount;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	int index = rand() % (MOVE_COUNT - 1);
	if (_energyPoints >= ENERGY_COST)
	{
		_energyPoints -= ENERGY_COST;
		std::cout << "FR4G-TP " << _name << " initiated " << _moves[index] << " on " << target << "!" << std::endl;
	}
	else
		std::cout << "Where'd all my bullets go?" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs)
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

#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& src);
	~ClapTrap();
	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap& operator=(ClapTrap const& rhs);
protected:
	unsigned int _hitPoints = 100;
	unsigned int _maxHitPoints = 100;
	unsigned int _energyPoints = 100;
	unsigned int _maxEnergyPoints = 100;
	unsigned int _level = 1;
	int _meleeAttackDmg = 30;
	int _rangedAttackDmg = 20;
	int _armorDmgReduction = 5;
	std::string _name;
};


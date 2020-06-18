#pragma once
#include <string>
#include <iostream>
#define MOVE_COUNT 8
#define ENERGY_COST 25

class FragTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const& src);
	~FragTrap();
	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const& target);
	FragTrap& operator=(FragTrap const&rhs);

private:
	unsigned int _hitPoints = 100;
	unsigned int _maxHitPoints = 100;
	unsigned int _energyPoints = 100;
	unsigned int _maxEnergyPoints = 100;
	unsigned int _level = 1;
	int _meleeAttackDmg = 30;
	int _rangedAttackDmg = 20;
	int _armorDmgReduction = 5;
	std::string _name;
	std::string _moves[MOVE_COUNT] = { "Funzerker", "Meat Unicycle", "Blightbot", "Mechromagician", "Senseless Sacrifice", "Medbot", "Gun Wizard", "One Shot Wonder" };
};

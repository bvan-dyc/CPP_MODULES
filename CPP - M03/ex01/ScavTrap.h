#pragma once
#include <string>
#include <iostream>
#define CHALLENGE_COUNT 8
#define ENERGY_COST 25

class ScavTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& src);
	~ScavTrap();
	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const& target);
	ScavTrap& operator=(ScavTrap const& rhs);
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
	std::string challenges[CHALLENGE_COUNT] = {"Children Cardgame", "Yoyo", "Marbles", "Beyblade"};
};

#pragma once
#include "ClapTrap.h"
#define MOVE_COUNT 8
#define ENERGY_COST 25

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const& src);
	~FragTrap();
	void vaulthunter_dot_exe(std::string const& target);
	FragTrap& operator=(FragTrap const& rhs);
private:
	std::string _moves[MOVE_COUNT] = { "Funzerker", "Meat Unicycle", "Blightbot", "Mechromagician", "Senseless Sacrifice", "Medbot", "Gun Wizard", "One Shot Wonder" };
};

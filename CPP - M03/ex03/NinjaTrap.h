#pragma once
#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const& src);
	~NinjaTrap();
	void ninjaShoebox(NinjaTrap& ninjaTrap);
	void ninjaShoebox(FragTrap& fragTrap);
	void ninjaShoebox(ScavTrap& scavTrap);
	NinjaTrap& operator=(NinjaTrap const& rhs);
};

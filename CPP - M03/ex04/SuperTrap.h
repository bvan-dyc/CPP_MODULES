#pragma once
#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "NinjaTrap.h"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const& src);
	~SuperTrap();

	SuperTrap& operator=(SuperTrap const& rhs);
};

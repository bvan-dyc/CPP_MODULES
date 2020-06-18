#pragma once
#include "ClapTrap.h"
#define CHALLENGE_COUNT 4

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& src);
	~ScavTrap();
	void challengeNewcomer(std::string const& target);
	ScavTrap& operator=(ScavTrap const& rhs);
private:
	std::string challenges[CHALLENGE_COUNT] = { "Children Cardgame", "Yoyo", "Marbles", "Beyblade" };
};

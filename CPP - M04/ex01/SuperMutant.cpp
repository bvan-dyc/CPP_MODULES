#include "SuperMutant.h"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& src) : Enemy(src)
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - DAMAGE_REDUCTION);
}

SuperMutant SuperMutant::operator=(SuperMutant const& rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

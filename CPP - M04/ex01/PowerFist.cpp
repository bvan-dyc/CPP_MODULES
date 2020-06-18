#include "PowerFist.h"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50)
{
}

PowerFist::PowerFist(AWeapon const& src) : AWeapon(src)
{
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack() {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist const& PowerFist::operator=(AWeapon const& rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

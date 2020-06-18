#include "PlasmaRifle.h"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(AWeapon const& src) : AWeapon(src)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack() {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle const& PlasmaRifle::operator=(AWeapon const& rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

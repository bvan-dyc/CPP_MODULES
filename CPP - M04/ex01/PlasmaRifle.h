#pragma once
#include "AWeapon.h"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(AWeapon const& src);
	~PlasmaRifle();
	void attack();
	PlasmaRifle const& operator=(AWeapon const& rhs);
};


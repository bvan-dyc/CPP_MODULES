#pragma once
#include "AWeapon.h"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(AWeapon const& src);
	~PowerFist();
	void attack();
	PowerFist const& operator=(AWeapon const &rhs);
};


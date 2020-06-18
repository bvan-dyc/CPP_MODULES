#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
	void setWeapon(Weapon &weapon);
private:
	Weapon &_weapon;
	std::string _name;
};

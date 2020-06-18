#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
private:
	Weapon* _weapon;
	std::string _name;
};

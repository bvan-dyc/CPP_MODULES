#pragma once
#include <string>
#include <iostream>
#include "AWeapon.h"
#include "Enemy.h"

class Character
{
public:
	Character(std::string const name);
	Character(Character const&);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	AWeapon* getWeapon() const;
	int getAP() const;
	Character operator=(Character const&);

private:
	std::string _name;
	int _ap = 40;
	int _maxAP = 40;
	AWeapon* _weapon = nullptr;
};

std::ostream& operator<<(std::ostream& os, Character const& rhs);
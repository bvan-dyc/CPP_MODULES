#include "AWeapon.h"

AWeapon::AWeapon(std::string const& name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const& src) {
	_name = src._name;
	_apcost = src._apcost;
	_damage = src._damage;
}

AWeapon::~AWeapon()
{
}

std::string AWeapon::getName() const { return _name; }

int AWeapon::getAPCost() const { return _apcost; }

int AWeapon::getDamage() const { return _damage; }

void AWeapon::attack() const {
}

AWeapon& AWeapon::operator=(AWeapon const& rhs)
{
	_name = rhs._name;
	_apcost = rhs._apcost;
	_damage = rhs._damage;
	return (*this);
}

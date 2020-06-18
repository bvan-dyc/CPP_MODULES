#include "Character.h"

Character::Character(std::string const name) : _name(name)
{
}

Character::Character(Character const& src)
{
	_name = src._name;
	_ap = src._ap;
}

Character::~Character()
{
}

void Character::recoverAP()
{
	_ap = _ap + 10 > _maxAP ? _maxAP : _ap + 10;
}

void Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (enemy && _weapon && _weapon->getAPCost() <= _ap)
	{
		std::cout << enemy->getType();
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		_ap -= _weapon->getAPCost();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHp() <= 0)
			delete(enemy);
	}
}

std::string Character::getName() const
{
	return _name;
}

AWeapon* Character::getWeapon() const
{
	return _weapon;
}

int Character::getAP() const
{
	return _ap;
}

Character Character::operator=(Character const& rhs)
{
	_name = rhs._name;
	return(*this);
}

std::ostream& operator<<(std::ostream& os, Character const& rhs)
{
	os << rhs.getName() << " has " << rhs.getAP() << "AP and ";
	if (rhs.getWeapon())
		os << "carries a " << rhs.getWeapon()->getName();
	else
		os << "is unarmed";
	os << std::endl;
	return(os);
}

#include "Character.h"

Character::Character(std::string name) : _name(name) {

}

Character::Character(Character const& src) {
	_name = src._name;
}

Character::~Character() {
	for (int i = 0; i < MAX_MATERIAS; i++)
	{
		_inventory[i] = NULL;
	}
}

std::string const& Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx > 0 && idx < MAX_MATERIAS)
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < MAX_MATERIAS && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
}

Character Character::operator=(Character const& rhs)
{
	return *this;
}

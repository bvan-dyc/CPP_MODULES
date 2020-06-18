#pragma once
#include "ICharacter.h"
#include <vector>
#define MAX_MATERIAS 4

class Character : public ICharacter
{
public:
	Character(std::string name);
	Character(Character const& src);
	~Character() {};
	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	Character operator=(Character const& rhs);
private:
	std::string _name;
	AMateria* _inventory[MAX_MATERIAS];
};

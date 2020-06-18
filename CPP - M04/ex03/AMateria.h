#pragma once
#include <string>
#include <iostream>
#include "ICharacter.h"

class AMateria
{
private:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const& type);
	AMateria(AMateria const& src);
	~AMateria();

	std::string const& getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	AMateria& operator=(AMateria const &rhs);
};

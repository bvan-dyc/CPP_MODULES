#include "AMateria.h"

AMateria::AMateria(std::string const& type) : _type(type)
{
	_xp = 0;
}

AMateria::AMateria(AMateria const& src)
{
	_xp = src._xp;
}

AMateria::~AMateria()
{
}

std::string const& AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter& target)
{
	_xp += 10;
}

AMateria& AMateria::operator=(AMateria const& rhs)
{
	_type = rhs._type;
	_xp = rhs._xp;
	return (*this);
}

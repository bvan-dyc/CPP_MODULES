#include "Ice.h"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const& src) : AMateria("ice")
{
	*this = src;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return (AMateria*)new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << "NOM" << " *" << std::endl;
}

Ice& Ice::operator=(Ice const& rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

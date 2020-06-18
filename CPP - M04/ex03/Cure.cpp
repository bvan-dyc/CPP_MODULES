#include "Cure.h"

Cure::Cure() : AMateria("ice")
{
}

Cure::Cure(Cure const& src) : AMateria("ice")
{
	*this = src;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return (AMateria*)new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << "NOM" << "'s wounds *" << std::endl;
}

Cure& Cure::operator=(Cure const& rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

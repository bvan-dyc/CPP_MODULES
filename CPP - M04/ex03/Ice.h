#pragma once
#include "AMateria.h"
class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const& src);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);

	Ice &operator=(Ice const& rhs);
};


#pragma once
#include "AMateria.h"
class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const& src);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);

	Cure& operator=(Cure const& rhs);
};


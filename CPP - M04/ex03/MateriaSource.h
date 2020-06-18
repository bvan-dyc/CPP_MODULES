#pragma once
#include "IMateriaSource.h"
# define MAX_MATERIAS 4

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const& src);
	~MateriaSource();
	void learnMateria(AMateria *materia);
	AMateria* createMateria(std::string const& type);
	MateriaSource const& operator=(MateriaSource const& rhs);
private:
	AMateria* _materias[MAX_MATERIAS];
};

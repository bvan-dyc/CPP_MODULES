#include "MateriaSource.h"

MateriaSource::MateriaSource() {

}

MateriaSource::MateriaSource(MateriaSource const& src) {

}

MateriaSource::~MateriaSource() {

}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (_materias[i] == NULL) {
			_materias[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < MAX_MATERIAS; i++)
	{
		if (_materias[i])
		{
			if (_materias[i]->getType() == type)
				return (_materias[i]->clone());
		}
	}
	return 0;
}

MateriaSource const& MateriaSource::operator=(MateriaSource const& rhs) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (_materias[i] == NULL) {
			AMateria* tmp = rhs._materias[i]->clone();
			delete _materias[i];
			_materias[i] = tmp;
		}
	}
	return *this;
}

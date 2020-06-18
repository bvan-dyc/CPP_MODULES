#include <iostream>
#include "Cure.h"
#include "Ice.h"
#include "Character.h"
#include "MateriaSource.h"

int main()
{
    IMateriaSource* mSource = new MateriaSource();
    mSource->learnMateria(new Ice());
    mSource->learnMateria(new Cure());
    ICharacter* mendel = new Character("Mendel");
    AMateria* tmp;

    tmp = mSource->createMateria("ice");
    mendel->equip(tmp);
    tmp = mSource->createMateria("cure");
    mendel->equip(tmp);
    ICharacter* darwin = new Character("Darwin");

    mendel->use(0, *darwin);
    mendel->use(1, *darwin);

    delete darwin;
    delete mendel;
    delete mSource;

    return (0);
}

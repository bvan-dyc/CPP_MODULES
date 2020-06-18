#include <iostream>
#include <string>
#include "Character.h"
#include "PlasmaRifle.h"
#include "PowerFist.h"
#include "RadScorpion.h"
#include "SuperMutant.h"

int main()
{
	SuperMutant* sMutant = new SuperMutant();
	RadScorpion* rScorpion = new RadScorpion();
	Character* mendel = new Character("Mendel");

	PlasmaRifle* plasmaRifle = new PlasmaRifle();
	PowerFist* powerFist = new PowerFist();

	std::cout << *mendel;

	mendel->equip(plasmaRifle);
	std::cout << *mendel;

	mendel->equip(powerFist);
	mendel->attack(rScorpion);
	mendel->attack(rScorpion);
	mendel->attack(rScorpion);
	std::cout << *mendel;

	mendel->equip(plasmaRifle);
	std::cout << *mendel;

	mendel->attack(rScorpion);
	std::cout << *mendel;

	mendel->attack(rScorpion);
	std::cout << *mendel;

	mendel->attack(sMutant);
	std::cout << *mendel;

	return (0);
}

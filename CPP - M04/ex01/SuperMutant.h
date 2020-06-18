#pragma once
#include <string>
#include <iostream>
#include "Enemy.h"

constexpr int DAMAGE_REDUCTION = 3;

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const&);
	~SuperMutant();
	void takeDamage(int);
	SuperMutant operator=(SuperMutant const& rhs);
};

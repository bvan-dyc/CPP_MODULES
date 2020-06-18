#pragma once
#include <string>
#include <iostream>
#include "Enemy.h"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const&);
	~RadScorpion();
	RadScorpion operator=(RadScorpion const& rhs);
};

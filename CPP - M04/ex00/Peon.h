#pragma once
#include "Victim.h"
#include <iostream>

class Peon : public Victim
{
public:
	Peon(std::string _name);
	Peon(Peon const& src);
	~Peon();
	void getPolymorphed() const;
	Peon operator=(Peon const& src);
};

#pragma once
#include <string>
#include <iostream>
#include "Victim.h"

class Sorcerer
{
public:
	Sorcerer(std::string title, std::string name);
	Sorcerer(Sorcerer const& src);
	~Sorcerer();
	void polymorph(Victim const&);
	Sorcerer& operator=(Sorcerer const& rhs);
	std::string const& getName(void) const;
	std::string const& getTitle(void) const;
private:
	std::string _title;
	std::string _name;
};

std::ostream& operator<<(std::ostream& os, Sorcerer const& rhs);
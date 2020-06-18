#pragma once
#include <iostream>
#include <string>

class Victim
{
public:
	Victim(std::string name);
	Victim(Victim const& src);
	~Victim();
	virtual void getPolymorphed() const;
	Victim& operator=(Victim const& rhs);
	std::string const& getName() const;
protected:
	std::string _name;
};

std::ostream& operator<<(std::ostream& os, Victim const& rhs);
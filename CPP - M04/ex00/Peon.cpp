#include "Peon.h"

Peon::Peon(std::string _name) : Victim(_name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const& src) : Victim(src)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const {
	std::cout << _name << " was just polymorphed into a pink pony!" << std::endl;
}

Peon Peon::operator=(Peon const& src)
{
	Victim::operator=(src);
	return (*this);
}

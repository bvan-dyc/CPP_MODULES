#include "Victim.h"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const& src)
{
	_name = src._name;
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "The Victim " << _name << " died for no apparent reasons!" << std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " was just polymorphed into a cute little sheep!" << std::endl;
}

Victim& Victim::operator=(Victim const& rhs)
{
	_name = rhs.getName();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, Victim const& rhs)
{
	os << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return(os);
}

std::string	const& Victim::getName() const { return (_name); }
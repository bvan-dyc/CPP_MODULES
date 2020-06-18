#include "Sorcerer.h"

Sorcerer::Sorcerer(std::string name, std::string title) : _title(title), _name(name)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& src)
{
	_title = src._title;
	_name = src._name;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", "<< _title << ", is dead.Consequences will never be the same!" << std::endl;
}

void Sorcerer::polymorph(Victim const& victim)
{
	victim.getPolymorphed();
}

Sorcerer& Sorcerer::operator=(Sorcerer const& rhs)
{
	_name = rhs.getName();
	_title = rhs.getTitle();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, Sorcerer const& rhs)
{
	os << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and i like ponies!" << std::endl;
	return(os);
}

std::string	const& Sorcerer::getName(void) const { return (_name); }
std::string	const& Sorcerer::getTitle(void) const { return (_title); }

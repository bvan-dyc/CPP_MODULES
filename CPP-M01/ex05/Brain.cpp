#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	std::stringstream stream;
	stream << (void*)this;
	return stream.str();
}

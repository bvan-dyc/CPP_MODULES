#include "Human.hpp"

Human::Human() {
}

Human::~Human() {
}

std::string Human::identify()
{
	return (_brain.identify());
}

Brain Human::getBrain()
{
	return (_brain);
}

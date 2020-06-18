#pragma once
#include <string>
#include "Brain.hpp"

class Human
{
public:
	Human();
	~Human();
	std::string identify();
	Brain getBrain();
private:
	Brain _brain;
};

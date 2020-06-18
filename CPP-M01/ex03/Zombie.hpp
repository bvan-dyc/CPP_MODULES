#pragma once
#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
	void setType(std::string type);
	void setName(std::string name);
private:
	std::string _name;
	std::string _type;
};

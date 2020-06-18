#include <iostream>
#include "easyfind.hpp"

template<typename T>
void easyfind(T t, int n)
{
}

int main()
{
	std::set<int> s;

	for (int i = 1; i <= 10; i++)
		s.insert(i);


	// confirm that it works
	for (int i = -10; i <= 20; i++)
	{
		try
		{
			std::cout << easyfind(s, i) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "couldn't find " << i << std::endl;
		}
	}
}

#include <string>
#include <iostream>

namespace Scalar
{
	char convertToChar(double d) {
		char c = static_cast<char>(d);
		if (std::isprint(c) == false)
		{
			std::cout << "Not a char." << std::endl;
		}
	}

	char convertToInt(double d) {
		if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN)) {
			std::cout << "Not an int." << std::endl;
		}
		return (static_cast<int>(d));
	}

	char convertToFloat(double d) {
		return (static_cast<float>(d));
	}

	char convertToDouble(double d) {
		return (static_cast<double>(d));
	}
}
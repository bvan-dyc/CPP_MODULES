#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const& copy);
	~Fixed();
	Fixed& operator=(Fixed const& rhs);
	int getRawBits() const;
	void setRawBits(int const raw);

	float toFloat(void) const;

	int toInt(void) const;

private:
	int	_rawBits;
	static const int nrawbits = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const& rhs);
#pragma once
#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &copy);
	~Fixed();
	Fixed& operator=(Fixed const& rhs);
	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int	_rawBits;
	static const int nrawbits = 8;
};

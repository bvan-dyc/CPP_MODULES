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
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	bool	operator>(Fixed const& rhs);
	bool	operator<(Fixed const& rhs);
	bool	operator>=(Fixed const& rhs);
	bool	operator<=(Fixed const& rhs);
	bool	operator==(Fixed const& rhs);
	bool	operator!=(Fixed const& rhs);
	Fixed&	operator=(Fixed const& rhs);
	Fixed&	operator+(Fixed const& rhs);
	Fixed&	operator-(Fixed const& rhs);
	Fixed&	operator*(Fixed const& rhs);
	Fixed&	operator/(Fixed const& rhs);
	Fixed&	operator++();
	Fixed& operator++(int);
	Fixed&	operator--();
	Fixed& operator--(int);
	static Fixed&	min(Fixed& a, Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static Fixed	const& min(Fixed const& a, Fixed const& b);
	static Fixed	const& max(Fixed const& a, Fixed const& b);

private:
	int	_rawBits;
	static const int nrawbits = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const& rhs);

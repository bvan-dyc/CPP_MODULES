#include "Fixed.h"

Fixed::Fixed()
{
	_rawBits = 0;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copy)
{
	_rawBits = copy._rawBits;
	std::cout << "Copy Constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = rhs.getRawBits();
	return(*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

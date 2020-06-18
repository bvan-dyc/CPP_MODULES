#include "Fixed.h"

Fixed::Fixed()
{
	_rawBits = 0;
}

Fixed::Fixed(const int i) {
	_rawBits = i << nrawbits;
}

Fixed::Fixed(const float f) {
	_rawBits = (int)roundf(f * (1 << nrawbits));
}

Fixed::Fixed(Fixed const& copy)
{
	_rawBits = copy._rawBits;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

float Fixed::toFloat(void) const {
	return((float)_rawBits / (1 << nrawbits));
}

int Fixed::toInt(void) const {
	return(_rawBits >> nrawbits);
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	_rawBits = rhs.getRawBits();
	return(*this);
}

bool Fixed::operator>(Fixed const& rhs)
{
	return(_rawBits > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const& rhs)
{
	return(_rawBits <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const& rhs)
{
	return(_rawBits >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const& rhs)
{
	return(_rawBits <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const& rhs)
{
	return(_rawBits == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const& rhs)
{
	return(_rawBits != rhs.getRawBits());
}

Fixed& Fixed::operator+(Fixed const& rhs)
{
	Fixed *sum = new Fixed();
	sum->_rawBits = _rawBits + rhs.getRawBits();
	return(*sum);
}

Fixed& Fixed::operator-(Fixed const& rhs)
{
	Fixed *diff = new Fixed();
	diff->_rawBits = _rawBits - rhs.getRawBits();
	return(*diff);
}

Fixed& Fixed::operator*(Fixed const& rhs)
{
	Fixed* product = new Fixed(this->toFloat() * rhs.toFloat());
	return(*product);
}

Fixed& Fixed::operator/(Fixed const& rhs)
{
	if (rhs.getRawBits() == 0) {
		std::cout << "Division by zero occured." << std::endl;
		return(*new Fixed());
	}
	Fixed* quotient = new Fixed(this->toFloat() / rhs.toFloat());
	return(*quotient);
}

Fixed& Fixed::operator++() {
	_rawBits++;
	return(*this);
}

Fixed& Fixed::operator++(int) {
	Fixed *tmp = new Fixed(*this);
	operator++();
	return(*tmp);
}

Fixed& Fixed::operator--() {
	_rawBits--;
	return(*this);
}

Fixed& Fixed::operator--(int) {
	Fixed* tmp = new Fixed(*this);
	operator--();
	return(*tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a._rawBits < b._rawBits) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a._rawBits > b._rawBits) ? a : b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
	return ((a._rawBits < b._rawBits) ? a : b);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
{
	return ((a._rawBits > b._rawBits) ? a : b);
}

std::ostream& operator<<(std::ostream& os, Fixed const& rhs)
{
	os << rhs.toFloat();
	return(os);
}

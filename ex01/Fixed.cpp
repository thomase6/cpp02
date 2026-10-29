#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : fixedNum(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other) : fixedNum(0)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->fixedNum = other.fixedNum;
	return *this;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return fixedNum;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedNum = raw;
}

Fixed::Fixed(const int n) : fixedNum(n << fractNum)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float n) : fixedNum(roundf(n *(1 << fractNum)))
{
	std::cout << "Float constructor called\n";
}

float Fixed::toFloat() const
{
	return (float)fixedNum/(1 << fractNum);
}

int Fixed::toInt() const
{
	return fixedNum >> fractNum;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

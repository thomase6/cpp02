#include "Fixed.hpp"
#include <iostream>

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
	this->fixedNum = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->fixedNum = other.getRawBits();
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


// Fixed::Fixed(const Fixed &other) : fixedNum(other.fixedNum)
// {
// 	std::cout << "Copy constructor called\n";
// }

// Fixed &Fixed::operator=(const Fixed &other)
// {
// 	std::cout << "Copy assignment operator called\n";
// 	if (this != &other)
// 		this->fixedNum = other.fixedNum;
// 	return *this;
// }
// Fixed::Fixed(const Fixed &other) : fixedNum(0)
// {
// 	std::cout << "Copy constructor called\n";
// 	*this = other;
// }
/*
Fixed::Fixed() : fixedNum(0)
{
	std::cout << "Default constructor called\n";
	setRawBits(0);
}
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		setRawBits(other.getRawBits());
	return *this;
}	
*/
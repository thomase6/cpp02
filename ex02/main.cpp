#include "Fixed.hpp"
#include <iostream>

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(5);
	Fixed d(10);

	std::cout << (c <= d) << std::endl;
	std::cout << (c >= d) << std::endl;
	std::cout << (c != d) << std::endl;
	std::cout << (c == d) << std::endl;
	std::cout << (c / d) << std::endl;
	std::cout << (c * d) << std::endl;

	return 0;
}

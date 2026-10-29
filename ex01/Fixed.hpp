#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	fixedNum;
	static const int fractNum = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	Fixed(const int n);
	Fixed(const float n);
	
	int	getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif //FIXED_HPP
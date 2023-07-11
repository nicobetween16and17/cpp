#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	static const int _bit = 8;
public:
	Fixed(void);
	Fixed(Fixed const &f);
	Fixed(const int bit);
	Fixed(const float bit);
	~Fixed();
	Fixed operator=(Fixed const &f);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};
std::ostream & operator<<(std::ostream &o, Fixed const &f);

#endif
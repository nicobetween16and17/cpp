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
	Fixed operator-(Fixed const &f);
	Fixed operator+(Fixed const &f);
	Fixed operator*(Fixed const &f);
	Fixed operator/(Fixed const &f);
	bool operator<(Fixed const &f) const;
	bool operator>(Fixed const &f) const;
	bool operator==(Fixed const &f) const;
	bool operator!=(Fixed const &f) const;
	bool operator>=(Fixed const &f) const;
	bool operator<=(Fixed const &f) const;
	Fixed operator++(int i);
	Fixed operator--(int i);
	Fixed &operator++(void);
	Fixed &operator--(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed& min(Fixed &f1, Fixed &f2);
	static Fixed& max(Fixed &f1, Fixed &f2);
	static const Fixed& min(const Fixed &f1, const Fixed &f2);
	static const Fixed& max(const Fixed &f1, const Fixed &f2);
};
std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif
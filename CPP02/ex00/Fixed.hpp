#include <iostream>
#include <cmath>

class Fixed{
private:
	int _value;
	static const int _bit = 8;
public:
	Fixed(void);
	Fixed(Fixed const &f);
	~Fixed();
	Fixed operator=(Fixed const &f);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
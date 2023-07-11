#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constructor was called\n";
}

Fixed::Fixed(const int n)
{
	this->_value = n << this->_bit;
	std::cout << "Int constructor was called\n";
}

Fixed::Fixed(const float n)
{
	this->_value = std::round(n * (1 << this->_bit));
	std::cout << "Float constructor was called\n";
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor was called\n";
	this->_value = f._value;
}

Fixed Fixed::operator=(Fixed const &f)
{
	std::cout << "Copy assignment operator was called\n";
	if (this != &f)
		this->_value = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor was called\n";
}

int Fixed::getRawBits( void ) const
{
	return this->_value;
}

void    Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float   Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / ( 1 << this->_bit);
}

int     Fixed::toInt(void) const
{
	return this->_value >> _bit;
}

std::ostream & operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
}
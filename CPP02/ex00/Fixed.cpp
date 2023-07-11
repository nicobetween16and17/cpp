#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor was called\n";
	this->_value = 0;
}
Fixed::Fixed(Fixed const &f)
{
	this->setRawBits(f.getRawBits());
	std::cout << "Copy constructor was called\n";
}
Fixed::~Fixed()
{
	std::cout << "Destructor was called\n";
}

Fixed Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignement operator called\n";
	this->_value = f.getRawBits();
	return *this;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function was called\n";
	return (this->_value);
}
void Fixed::setRawBits(int const raw)
{
	this->_value = raw;

}
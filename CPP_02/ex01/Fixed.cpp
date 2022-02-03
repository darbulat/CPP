#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int valueInt)
{
	std::cout << "Int constructor called" << std::endl;
	value = valueInt << fraction;
}

Fixed::Fixed(const float valueFloat)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(valueFloat * (1 << fraction));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = f.value;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(const int raw)
{
	value = raw;
}

float Fixed::toFloat() const
{
	return (float) value / (1 << fraction);
}

int Fixed::toInt() const
{
	return value >> fraction;
}

std::ostream	&operator<<( std::ostream &out, const Fixed &f )
{
	out << f.toFloat();
	return (out);
}

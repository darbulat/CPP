#include "Fixed.h"

Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(Fixed const &a)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int valueInt)
{
//	std::cout << "Int constructor called" << std::endl;
	value = valueInt << fraction;
}

Fixed::Fixed(const float valueFloat)
{
//	std::cout << "Float constructor called" << std::endl;
	value = roundf(valueFloat * (1 << fraction));
}

Fixed::~Fixed( void )
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	value = f.getRawBits();
	return *this;
}

Fixed Fixed::operator*( const Fixed &rf ) const
{
	return Fixed(toFloat() * rf.toFloat());
}

Fixed Fixed::operator/( const Fixed &rf ) const
{
	return Fixed(toFloat() / rf.toFloat());
}

Fixed Fixed::operator+( const Fixed &rf ) const
{
	return Fixed(toFloat() + rf.toFloat());
}

Fixed Fixed::operator-( const Fixed &rf ) const
{
	return Fixed(toFloat() - rf.toFloat());
}

Fixed &Fixed::operator++( void )
{
	value++;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed prev(*this);
	value++;
	return prev;
}

Fixed &Fixed::operator--( void )
{
	value--;
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed prev(*this);
	value--;
	return prev;
}

bool	Fixed::operator>( const Fixed &rf ) const
{
	return value > rf.getRawBits();
}

bool	Fixed::operator<( const Fixed &rf ) const
{
	return value < rf.getRawBits();
}

bool	Fixed::operator<=( const Fixed &rf ) const
{
	return value <= rf.getRawBits();
}

bool	Fixed::operator>=( const Fixed &rf ) const
{
	return value >= rf.getRawBits();
}

bool	Fixed::operator==( const Fixed &rf ) const
{
	return value == rf.getRawBits();
}

bool	Fixed::operator!=( const Fixed &rf ) const
{
	return value != rf.getRawBits();
}

const Fixed &Fixed::max( const Fixed &lf, const Fixed &rf )
{
	if (lf.getRawBits() > rf.getRawBits())
		return lf;
	return rf;
}

Fixed &Fixed::max( Fixed &lf, Fixed &rf )
{
	if (lf.getRawBits() > rf.getRawBits())
		return lf;
	return rf;
}

const Fixed &Fixed::min( const Fixed &lf, const Fixed &rf )
{
	if (lf.getRawBits() < rf.getRawBits())
		return lf;
	return rf;
}

Fixed &Fixed::min( Fixed &lf, Fixed &rf )
{
	if (lf.getRawBits() < rf.getRawBits())
		return lf;
	return rf;
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << std::endl;
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

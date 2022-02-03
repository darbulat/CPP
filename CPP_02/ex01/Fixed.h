#ifndef CPP_FIXED_H
# define CPP_FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{

private:
	int value;
	static const int fraction = 8;

public:
	Fixed( void );
	Fixed( Fixed const &f);
	Fixed( const int valueInt );
	Fixed( const float valueFloat );
	~Fixed();

	Fixed &operator = ( const Fixed &f );
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream	&operator<<( std::ostream &ostream, const Fixed &f );

#endif //CPP_FIXED_H

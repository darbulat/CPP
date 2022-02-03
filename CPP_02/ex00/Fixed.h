#ifndef CPP_FIXED_H
# define CPP_FIXED_H

# include <iostream>

class Fixed
{
private:
	int value;
	static const int fraction = 8;
public:
	Fixed( void );
	Fixed( Fixed &f);
	~Fixed();
	Fixed &operator = ( const Fixed &f );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif //CPP_FIXED_H

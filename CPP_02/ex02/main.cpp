#include "Fixed.h"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "My tests" << std::endl;
	std::cout << "min: " << Fixed::min( a, b ) << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "/: " <<  b / a << std::endl;
	std::cout << "+: " <<  b + a << std::endl;
	std::cout << "-: " <<  b - a << std::endl;
	std::cout << ">: " <<  (b > a) << std::endl;
	std::cout << "<: " <<  (b < a) << std::endl;
	std::cout << "==: " <<  (b == a) << std::endl;
	std::cout << "==: " <<  (b != a) << std::endl;

	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << a.toFloat() << std::endl;

	std::cout << "/: " <<  b.toFloat() / a.toFloat() << std::endl;

	return 0;
}

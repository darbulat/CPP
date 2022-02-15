#include "whatever.h"
#include <iostream>


int main()
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	std::cout << "====================== "  << std::endl;

	float f1 = 2.1;
	float f2 = 2.3;
	std::cout << "f1 = " << f1 << std::endl;
	std::cout << "f2 = " << f2 << std::endl;
	swap(f1, f2);
	std::cout << "f1 = " << f1 << std::endl;
	std::cout << "f2 = " << f2 << std::endl;
	std::cout << "min(2.1, 2.3) = " << min(f1, f2) << std::endl;
	std::cout << "max(2.1, 2.3) = " << max(f1, f2) << std::endl;

}

#include "whatever.h"
#include <iostream>


int main()
{
	int a = 5;
	int b = 2;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min(2, 5) = " << min(a, b) << std::endl;
	std::cout << "max(2, 5) = " << max(a, b) << std::endl;
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

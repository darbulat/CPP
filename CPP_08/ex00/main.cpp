#include "easyfind.h"
#include <vector>
#include <iostream>

int	main( void )
{
	std::vector<int> vect(1,42);
	std::vector<int>::iterator it;

	for (int i = 50; i < 100; i+=5)
		vect.push_back(i);
	it = easyfind(vect, 90);
	std::cout << *it << std::endl;

	try
	{
		it = easyfind(vect, 10);
		std::cout << *it << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

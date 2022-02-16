#include "Array.h"


int	main( void )
{
	int size = 5;
	Array<int> *array = new Array<int>(size);
	Array<int> array1(*array);
	array1[1] = 133131;
	for (unsigned int i = 0; i < array1.size(); i++)
		std::cout << i << ": " << array1[i] << std::endl;
	try
	{
		std::cout << array1[size] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete array;
	Array<std::string> strarr;
	std::cout << "size: " << strarr.size() << std::endl;
	Array<std::string> strarr1(1);
	std::cout << "size: " << strarr1.size() << std::endl;
	strarr1[0] = "String value";
	std::cout << "0: " << strarr1[0] << std::endl;

}

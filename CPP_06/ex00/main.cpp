#include <iostream>
#include "Converter.h"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return 0;
	}
	Converter converter;
	try
	{
		converter.setValues(argv[1]);
		converter.printValues();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

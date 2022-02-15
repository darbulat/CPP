#include <iostream>
#include <cstdlib>
#include "iter.h"

template<typename T>
void display( T &whatever )
{
	std::cout << whatever << std::endl;
}

void setRandomValue( int &number )
{
	number = std::rand();
}

void setRandomValue( float &number )
{
	number = std::rand() / 100;
}

void setRandomValue( char &char_ )
{
	char_ = std::rand() % 25 + 97;
}



int	main( void )
{
	int *intTable = new int[5];
	float *floatTable = new float[5];
	char *charTable = new char[5];

	for (int i = 0; i < 5; i ++)
		setRandomValue(intTable[i]);
	iter(intTable, 5, &display);
	std::cout << "----------------" << std::endl;
	for (int i = 0; i < 5; i ++)
		setRandomValue(floatTable[i]);
	iter(floatTable, 5, &display);
	std::cout << "----------------" << std::endl;
	for (int i = 0; i < 5; i ++)
		setRandomValue(charTable[i]);
	iter(charTable, 5, &display);
}

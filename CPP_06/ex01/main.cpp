#include <iostream>
#include "Serializer.h"


int main()
{

	Data data(49, 'q', 42.42, 4321.431, "Hello, world!");
	Data *data1;
	Serializer serializer;
	uintptr_t raw;

	std::cout << &data << std::endl;
	raw = serializer.serialize(&data);
	std::cout << raw << std::endl;
	data1 = serializer.deserialize(raw);
	std::cout << data1 << std::endl;
	if (*data1 == data)
		std::cout << "Both data are equal!" << std::endl;
	else
		std::cerr << "Both data are not equal :(" << std::endl;
}

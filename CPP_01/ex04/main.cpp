#include "Replace.h"

int main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return 0;
	}

	Replace().replace(argv[1], argv[2], argv[3]);

	return 1;
}

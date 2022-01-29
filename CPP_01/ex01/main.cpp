#include "Zombie.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	Zombie *zombie;
	int i;
	int N;
	std::string name;

	if (argc == 2)
	{
		N = atoi(argv[1]);
		name = argv[1];
	}
	else
	{
		N = 5;
		name = "FIVE";
	}
	zombie = zombieHorde(N, name);
	i = 0;
	while (i < N)
	{
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
}
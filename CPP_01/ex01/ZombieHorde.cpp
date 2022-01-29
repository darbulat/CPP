#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde = new Zombie[N];

	if (N < 1)
		return NULL;
	for (int i = 0; i < N; i++)
		zombieHorde[i].setName(name);
	return zombieHorde;
}

#include "Zombie.h"

int main()
{
	Zombie zombie("Manual Zombie");
	Zombie *new_zombie;

	zombie.announce();
	new_zombie = newZombie("New Zombie");
	new_zombie->announce();
	delete new_zombie;
	randomChump("Random Zombie");
}
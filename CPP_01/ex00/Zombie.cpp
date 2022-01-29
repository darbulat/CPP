#include "Zombie.h"
#include <iostream>

Zombie::Zombie( std::string name ): name(name)
{
}

Zombie::~Zombie()
{
	std::cout << this->name << ": Destroying..." << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

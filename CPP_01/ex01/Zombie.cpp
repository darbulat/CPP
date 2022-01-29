#include "Zombie.h"
#include <iostream>

Zombie::Zombie( void ): name("")
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

void Zombie::setName(std::string name)
{
	this->name = name;
}

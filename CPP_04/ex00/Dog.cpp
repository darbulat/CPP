#include "Dog.h"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default constructor of Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default destructor of Dog" << std::endl;
}

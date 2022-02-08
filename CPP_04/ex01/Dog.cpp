#include "Dog.h"

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor of Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Default destructor of Dog" << std::endl;
}

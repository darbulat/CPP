#include "Cat.h"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Cat: called default constructor." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat: called default destructor." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}

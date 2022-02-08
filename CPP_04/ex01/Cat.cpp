#include "Cat.h"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Default constructor of Cat" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Default destructor of Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}

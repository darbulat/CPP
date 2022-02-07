#include "Cat.h"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default constructor of Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default destructor of Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}

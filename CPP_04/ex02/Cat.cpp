#include "Cat.h"

Cat::Cat()
{
	std::cout << "Cat: called default constructor." << std::endl;
	this->type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &cat) : AAnimal()
{
	std::cout << "Dog: called copy constructor." << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->type = cat.type;

	brain = new Brain(*cat.brain);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: called default destructor." << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}

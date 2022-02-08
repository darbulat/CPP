#include "Dog.h"

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Dog: called default constructor." << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	for (int i = 0; i < Brain::len; i++)
		this->brain[i] = dog.brain[i];
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog: called default destructor." << std::endl;
}

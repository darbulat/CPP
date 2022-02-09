#include "Dog.h"

Dog::Dog()
{
	std::cout << "Dog: called default constructor." << std::endl;
	this->type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &dog) : AAnimal()
{
	std::cout << "Dog: called copy constructor." << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	this->type = dog.type;

	brain = new Brain(*dog.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: called default destructor." << std::endl;
	delete brain;
}

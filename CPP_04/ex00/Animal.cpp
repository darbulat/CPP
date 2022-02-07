#include "Animal.h"

Animal::Animal() : type("")
{
	std::cout << "Default constructor of Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default destructor of Animal" << std::endl;
}

Animal::Animal(Animal &animal)
{
	*this = animal;
}

Animal &Animal::operator=( const Animal &animal )
{
	type = animal.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "My name is Animal" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

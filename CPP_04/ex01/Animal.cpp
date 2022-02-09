#include "Animal.h"

Animal::Animal() : type("")
{
	std::cout << "Animal: called default constructor." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal: called default destructor." << std::endl;
}

Animal::Animal(Animal &animal)
{
	std::cout << "Animal: called copy constructor." << std::endl;
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

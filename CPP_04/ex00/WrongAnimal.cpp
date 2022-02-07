#include "WrongAnimal.h"


WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "Default constructor of WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &animal)
{
	*this = animal;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &animal )
{
	type = animal.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "My name is Wrong Animal" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

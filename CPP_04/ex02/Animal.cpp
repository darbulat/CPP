#include "AAnimal.h"

AAnimal::AAnimal() : type("")
{
	std::cout << "AAnimal: called default constructor." << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: called default destructor." << std::endl;
}

AAnimal::AAnimal(AAnimal &animal)
{
	std::cout << "AAnimal: called copy constructor." << std::endl;
	*this = animal;
}

AAnimal &AAnimal::operator=( const AAnimal &animal )
{
	type = animal.type;
	return *this;
}

#include "AAnimal.h"

AAnimal::AAnimal() : type("")
{
	std::cout << "AAnimal: called default constructor." << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: called default destructor." << std::endl;
}

AAnimal::AAnimal(AAnimal &AAnimal)
{
	std::cout << "AAnimal: called copy constructor." << std::endl;
	*this = AAnimal;
}

AAnimal &AAnimal::operator=( const AAnimal &AAnimal )
{
	type = AAnimal.type;
	return *this;
}

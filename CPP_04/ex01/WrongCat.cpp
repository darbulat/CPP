#include "WrongCat.h"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default constructor of WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default destructor of WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}

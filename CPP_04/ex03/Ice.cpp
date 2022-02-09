#include "Ice.h"


Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice: called default constructor" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice: called destructor" << std::endl;
}

Ice::Ice(Ice const &ice) : AMateria("ice")
{
	*this = ice;
}

Ice &Ice::operator=(const Ice &ice)
{
	type = ice.getType();
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

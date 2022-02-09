#include "Ice.h"


Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice: called default constructor" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice: called destructor" << std::endl;
}

Ice::Ice(Ice const &ice) : AMateria(ice)
{
	std::cout << "Ice: called copy constructor" << std::endl;
	*this = ice;
}

Ice &Ice::operator=(const Ice &ice)
{
	_type = ice.getType();
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

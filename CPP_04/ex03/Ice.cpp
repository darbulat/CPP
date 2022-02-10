#include "Ice.h"


Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &ice) : AMateria(ice)
{
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

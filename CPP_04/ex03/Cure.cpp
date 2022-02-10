#include "Cure.h"


Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure: called default constructor" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure: called destructor" << std::endl;
}

Cure::Cure(Cure const &cure) : AMateria(cure)
{
	std::cout << "Cure: called copy constructor" << std::endl;
	*this = cure;
}

Cure &Cure::operator=(const Cure &cure)
{
	_type = cure.getType();
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

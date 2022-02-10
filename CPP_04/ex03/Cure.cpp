#include "Cure.h"


Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &cure) : AMateria(cure)
{
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

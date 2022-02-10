#include "AMateria.h"

AMateria::AMateria()
{
}

AMateria::AMateria(const std::string &type)
{
	_type = type;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	_type = src.getType();
	return *this;
}

const std::string &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	(void) target;
}

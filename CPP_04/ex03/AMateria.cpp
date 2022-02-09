#include "AMateria.h"

AMateria::AMateria()
{
	std::cout << "AMateria: called default constructor" << std::endl;
}

AMateria::AMateria(const std::string &type)
{
	std::cout << "AMateria: called name constructor" << std::endl;
	_type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria: called destructor" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "AMateria: called copy constructor" << std::endl;
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

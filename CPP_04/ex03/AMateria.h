#ifndef CPP_AMATERIA_H
#define CPP_AMATERIA_H

#include <iostream>
#include "ICharacter.h"

class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const *src);
	virtual ~AMateria();
	virtual AMateria &operator = (AMateria const &src);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_AMATERIA_H

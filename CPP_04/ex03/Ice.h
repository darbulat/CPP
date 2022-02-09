#ifndef CPP_ICE_H
#define CPP_ICE_H

#include "AMateria.h"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &ice);
	Ice &operator = ( Ice const &ice );
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};


#endif //CPP_ICE_H

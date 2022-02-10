#ifndef CPP_CURE_H
#define CPP_CURE_H


#include "AMateria.h"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const &cure);
	Cure &operator = ( Cure const &cure );
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};



#endif //CPP_CURE_H

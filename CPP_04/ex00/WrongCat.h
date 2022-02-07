#ifndef CPP_WRONGCAT_H
#define CPP_WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	void makeSound() const;
};


#endif //CPP_WRONGCAT_H

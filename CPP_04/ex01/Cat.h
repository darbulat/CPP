#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	void makeSound() const;
};


#endif //CPP_CAT_H

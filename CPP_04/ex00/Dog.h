#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	void makeSound() const;

};


#endif //CPP_DOG_H

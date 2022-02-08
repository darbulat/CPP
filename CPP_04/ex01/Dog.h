#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	void makeSound() const;

private:
	Brain *brain;
};


#endif //CPP_DOG_H

#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
{
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &dog);
	Dog &operator=( const Dog &dog );
	void makeSound() const;

private:
	Brain *brain;
};

#endif //CPP_DOG_H

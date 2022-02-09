#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat( const Cat &cat );
	Cat &operator=( const Cat &cat );
	void makeSound() const;

private:
	Brain *brain;
};

#endif //CPP_CAT_H

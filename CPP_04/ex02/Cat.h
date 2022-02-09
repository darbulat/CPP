#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
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

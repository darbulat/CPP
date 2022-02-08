#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	void makeSound() const;

private:
	Brain *brain;
};


#endif //CPP_CAT_H

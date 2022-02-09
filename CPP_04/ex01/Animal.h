#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	virtual ~Animal();
	Animal(Animal &animal);
	Animal &operator=(Animal const &animal);
	virtual void makeSound() const;
};


#endif //CPP_ANIMAL_H

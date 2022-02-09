#ifndef CPP_AAnimal_H
#define CPP_AAnimal_H

#include <iostream>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(AAnimal &animal);
	virtual AAnimal &operator=(AAnimal const &animal);
	virtual void makeSound() const = 0;
};


#endif //CPP_AAnimal_H

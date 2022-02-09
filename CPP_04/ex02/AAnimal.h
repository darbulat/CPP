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
	AAnimal(AAnimal &AAnimal);
	virtual AAnimal &operator=(AAnimal const &AAnimal);
	virtual void makeSound() const = 0;
};


#endif //CPP_AAnimal_H

#ifndef CPP_WRONGANIMAL_H
#define CPP_WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{

protected:
	std::string type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal &animal);
	WrongAnimal &operator=(WrongAnimal const &animal);
	void makeSound() const;
	std::string getType() const;
};

#endif //CPP_WRONGANIMAL_H

#include "AAnimal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;

	const int len = 4;
	AAnimal *AAnimals[len];
	for (int i = 0; i < len / 2; i++)
		AAnimals[i] = new Cat();
	for (int i = len / 2; i < len; i++)
		AAnimals[i] = new Dog();
	for (int i = 0; i < len; i++)
		delete AAnimals[i];

	Dog basic;
	Dog tmp = basic;
	(void)tmp;
}

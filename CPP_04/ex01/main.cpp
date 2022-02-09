#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	const int len = 4;
	Animal *animals[len];
	for (int i = 0; i < len / 2; i++)
		animals[i] = new Cat();
	for (int i = len / 2; i < len; i++)
		animals[i] = new Dog();
	for (int i = 0; i < len; i++)
		delete animals[i];

	Dog basic;
	Dog tmp = basic;
	(void)tmp;
}

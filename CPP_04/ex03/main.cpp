#include "Ice.h"
#include "Character.h"

int main()
{
//	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = new Ice();
//	tmp = src->createMateria("ice");
	me->equip(tmp);
//	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->unequip(0);
	me->unequip(0);
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete tmp;
	delete me;
//	delete src;

	delete bob;
	return 0;
}
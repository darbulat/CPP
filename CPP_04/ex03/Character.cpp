#include "Character.h"

Character::Character()
{
	std::cout << "Character: called default constructor." << std::endl;
}

Character::~Character()
{
	std::cout << "Character: called destructor." << std::endl;
}

Character::Character(const Character &character)
{
	std::cout << "Character: called copy constructor." << std::endl;
	*this = character;
}

Character &Character::operator=(const Character &character)
{
	name = character.name;
	return *this;
}

const std::string &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	(void)m;
}

void Character::unequip(int idx)
{
	(void)idx;
}

void Character::use(int idx, ICharacter &target)
{
	(void)idx;
	(void)target;
}

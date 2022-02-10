#include "Character.h"

Character::Character()
{
	for (int i = 0; i < len; i++)
		slot[i] = NULL;
	for (int i = 0; i < 100; i++)
		unequipped[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < len; i++)
		if (slot[i])
			delete slot[i];
	for (int i = 0; i < 100; i++)
		if (unequipped[i])
			delete unequipped[i];
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < len; i++)
		slot[i] = NULL;
	for (int i = 0; i < 100; i++)
		unequipped[i] = NULL;
}

Character::Character(const Character &character)
{
	*this = character;
}

Character &Character::operator=( Character const &character )
{
	_name = character._name;
	for (int i = 0; i < len; i++)
		if (character.slot[i])
			slot[i] = character.slot[i]->clone();
	return *this;
}

const std::string &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (i < len)
	{
		if (slot[i] == NULL)
		{
			slot[i] = m->clone();
			break;
		}
		i++;
	}
	if (i == len)
		std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < len && idx >= 0)
	{
		if (slot[idx])
		{
			_push_materia(slot[idx]);
			slot[idx] = NULL;
		}
		else
			std::cout << "Empty slot Inventory " << idx << std::endl;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < len)
		if (slot[idx])
			slot[idx]->use(target);
}

void Character::_push_materia(AMateria *materia)
{
	for (int i = 0; i < 100; i++)
		if (unequipped[i] == NULL)
		{
			unequipped[i] = materia;
			return;
		}
}

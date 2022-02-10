#include "Character.h"

Character::Character()
{
	std::cout << "Character: called default constructor." << std::endl;
	for (int i = 0; i < len; i++)
		slot[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < len; i++)
	{
		if (slot[i])
			delete slot[i];
	}
	std::cout << "Character: called destructor." << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character: called name constructor." << std::endl;
	for (int i = 0; i < len; i++)
		slot[i] = NULL;
}

Character::Character(const Character &character)
{
	std::cout << "Character: called copy constructor." << std::endl;
	*this = character;
}

Character &Character::operator=( Character const &character )
{
	_name = character._name;
	for (int i = 0; i < len; i++)
	{
		if (character.slot[i])
			slot[i] = character.slot[i]->clone();
	}
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
			std::cout << "Equip Inventory: " << i << std::endl;
			break;
		}
		i++;
	}
	if (i == len)
		std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
// TODO: запоминать материю, во избежание утечек
	if (idx < len && idx >= 0)
	{
		if (slot[idx])
		{
			std::cout << "Unequip Inventory " << idx << std::endl;
			slot[idx] = NULL;
		}
		else
			std::cout << "Empty slot Inventory " << idx << std::endl;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < len)
	{
		if (slot[idx])
			slot[idx]->use(target);
	}
}

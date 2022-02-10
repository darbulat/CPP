#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < len; i++)
		slot[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < len; i++)
		if (slot[i])
			delete slot[i];
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	*this = source;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source)
{
	for (int i = 0; i < len; i++)
		slot[i] = source.slot[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < len; i++)
	{
		if (slot[i] == NULL)
		{
			slot[i] = materia;
			return;
		}
	}
	std::cout << "MateriaSource is full" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < len; i++)
		if (type == slot[i]->getType())
			return slot[i];
	std::cout << "Cannot find materia with type " << type << std::endl;
	return NULL;
}

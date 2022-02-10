#ifndef CPP_MATERIASOURCE_H
#define CPP_MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &source);
	MateriaSource &operator = (MateriaSource const &source);
	virtual void learnMateria(AMateria *);
	virtual AMateria * createMateria(const std::string &type);

private:

};


#endif //CPP_MATERIASOURCE_H

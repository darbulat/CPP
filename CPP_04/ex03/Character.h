#ifndef CPP_CHARACTER_H
#define CPP_CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter
{

public:
	Character();
	virtual ~Character();
	Character( Character const &character );
	Character( std::string name );
	Character &operator = ( Character const &character );

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	AMateria			*unequipped[100];

private:
	static const int	len = 4;
	AMateria			*slot[len];
	std::string			_name;
	void 				_push_materia(AMateria *materia);
};


#endif //CPP_CHARACTER_H

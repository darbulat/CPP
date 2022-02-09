#ifndef CPP_CHARACTER_H
#define CPP_CHARACTER_H

#include "ICharacter.h"

class Character : public ICharacter
{

public:
	Character();
	~Character();
	Character( Character const &character );
	Character &operator = ( Character const &character );

	std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

private:
	std::string name;

};


#endif //CPP_CHARACTER_H

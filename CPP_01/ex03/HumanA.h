#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <iostream>
# include "Weapon.h"

class HumanA
{
private:
	std::string name;
	Weapon &weapon;

public:
	HumanA(Weapon &weapon);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif

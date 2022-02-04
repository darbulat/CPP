
#ifndef CPP_CLAPTRAP_H
#define CPP_CLAPTRAP_H

#include <iostream>

class ClapTrap
{

private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string ct_name);
	ClapTrap(ClapTrap &ct);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &ct);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif //CPP_CLAPTRAP_H

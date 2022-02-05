
#ifndef CPP_CLAPTRAP_H
#define CPP_CLAPTRAP_H

#include <iostream>

class ClapTrap
{

protected:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &ct);
	~ClapTrap();
	ClapTrap &operator=( ClapTrap const &ct );
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif //CPP_CLAPTRAP_H

#ifndef CPP_DIAMONDTRAP_H
#define CPP_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: public FragTrap, public ScavTrap
{
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	void attack( const std::string &target );
	void whoAmI();

private:
	std::string _name;
};

#endif //CPP_DIAMONDTRAP_H

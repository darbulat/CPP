#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created..." << std::endl;
}


DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << _name << " destroyed..." << std::endl;
	return;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << ". ClapTrap::name is " << ClapTrap::_name << std::endl;
}

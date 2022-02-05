#include "FragTrap.h"

FragTrap::FragTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Default created..." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << "FragTrap " << _name << " created..." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed..." << std::endl;
}


void FragTrap::attack(const std::string &target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
		return;
	_energyPoints--;
	std::cout << "FragTrap " << _name << " (" << _energyPoints << ") attacks " << target << ", causing "
			  << _attackDamage << " points of damage!" << std::endl;
}


void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " high Fives Guys!" << std::endl;
}

#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default created..." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << "ScavTrap " << _name << " created..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &ct)
{
	*this = ct;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed..." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ct)
{
	_name = ct._name + "_copy";
	_energyPoints = ct._energyPoints;
	_hitPoints = ct._hitPoints;
	_attackDamage = ct._attackDamage;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
		return;
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " (" << _energyPoints << ") attacks " << target << ", causing "
			  << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

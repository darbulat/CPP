
#include "ClapTrap.h"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default created..." << std::endl;
}

ClapTrap::ClapTrap(std::string ct_name): _name(ct_name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created..." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &ct)
{
	*this = ct;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed..." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	_name = ct._name + "_copy";
	_energyPoints = ct._energyPoints;
	_hitPoints = ct._hitPoints;
	_attackDamage = ct._attackDamage;
	return *this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " (" << _energyPoints << ") repairs for "
		<< amount << " hit points! Current hit points is " << _hitPoints << std::endl;
	}
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
		return;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " (" << _energyPoints << ") attacks " << target << ", causing "
	<< _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_energyPoints == 0 || _hitPoints == 0)
		return;
	if (_hitPoints > amount)
		_hitPoints -= amount;
	else
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " (" << _energyPoints << ") takes " << amount <<
	" damage! Current hit points is " << _hitPoints << std::endl;
}


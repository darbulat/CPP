
#include "ClapTrap.h"


ClapTrap::ClapTrap(std::string ct_name)
{
	std::cout << "ClapTrap " << ct_name << " created..." << std::endl;
	name = ct_name;
	energyPoints = 10;
	hitPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &ct)
{
	*this = ct;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed..." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	name = ct.name;
	energyPoints = ct.energyPoints;
	hitPoints = ct.hitPoints;
	attackDamage = ct.attackDamage;
	return *this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " repairs for " << amount << " hit points!" << std::endl;
	}
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints < 0)
		return;
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
	<< attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	(void) amount;
}

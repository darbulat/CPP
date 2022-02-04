
#include "ClapTrap.h"

ClapTrap::ClapTrap(): hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap created..." << std::endl;
}

ClapTrap::ClapTrap(std::string ct_name): name(ct_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " created..." << std::endl;
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
	name = ct.name + "_copy";
	energyPoints = ct.energyPoints;
	hitPoints = ct.hitPoints;
	attackDamage = ct.attackDamage;
	return *this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " (" << energyPoints << ") repairs for "
		<< amount << " hit points! Current hit points is " << hitPoints << std::endl;
	}
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints == 0 || hitPoints == 0)
		return;
	energyPoints--;
	std::cout << "ClapTrap " << name << " (" << energyPoints << ") attacks " << target << ", causing "
	<< attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energyPoints == 0 || hitPoints == 0)
		return;
	if (hitPoints > amount)
		hitPoints -= amount;
	else
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " (" << energyPoints << ") takes " << amount <<
	" damage! Current hit points is " << hitPoints << std::endl;
}

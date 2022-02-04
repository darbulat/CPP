#include "ScavTrap.h"

int main( void )
{
	ScavTrap a("first");
	a.attack("other");
	a.takeDamage(10);
	a.beRepaired(10);
	a.guardGate();

	std::cout << "___________________" << std::endl;
	ScavTrap b(a);
}

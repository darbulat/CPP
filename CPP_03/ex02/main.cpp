#include "FragTrap.h"

int main( void )
{
	FragTrap a("first");
	a.attack("other");
	a.takeDamage(10);
	a.beRepaired(10);
	a.highFivesGuys();
	FragTrap b(a);
	b.highFivesGuys();
}

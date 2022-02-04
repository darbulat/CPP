#include "ClapTrap.h"

int main( void )
{
	ClapTrap ct("Warrior");
	ClapTrap copy_ct(ct);
	ct.beRepaired(10);
	ct.attack("10___");
	ct.takeDamage(24);
	ct.beRepaired(10);
	copy_ct.attack("Other");
	copy_ct.takeDamage(9);
}

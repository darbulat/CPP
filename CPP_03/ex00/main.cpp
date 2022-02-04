#include "ClapTrap.h"

int main( void )
{
	ClapTrap warrior("Warrior");
	ClapTrap copy_warrior(warrior);
	warrior.beRepaired(10);
	warrior.attack("10___TEST");
	warrior.takeDamage(24);
	warrior.beRepaired(10);
	copy_warrior.attack("Other");
	copy_warrior.takeDamage(9);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
	copy_warrior.beRepaired(1);
}

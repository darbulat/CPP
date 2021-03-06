#ifndef CPP_SCAVTRAP_H

# define CPP_SCAVTRAP_H

# include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

	void	attack( const std::string &target );
	void	guardGate( void );
};

#endif //CPP_SCAVTRAP_H

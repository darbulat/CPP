#ifndef CPP_SCAVTRAP_H

# define CPP_SCAVTRAP_H

# include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();

	void	attack( const std::string &target );
	void	guardGate( void );

};

#endif //CPP_SCAVTRAP_H

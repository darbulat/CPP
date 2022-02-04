#ifndef CPP_FRAGTRAP_H
#define CPP_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	void attack( const std::string &target );
	void highFivesGuys(void);
};


#endif //CPP_FRAGTRAP_H

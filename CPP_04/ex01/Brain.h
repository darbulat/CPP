#ifndef CPP_BRAIN_H
#define CPP_BRAIN_H

#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(Brain const &brain);
	Brain &operator = (Brain const &brain);
	static const int  len = 100;

private:
	std::string ideas[len];
};


#endif //CPP_BRAIN_H

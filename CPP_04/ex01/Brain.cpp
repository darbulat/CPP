#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain: called default constructor." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain: called default destructor." << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < len; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<< "classes constrycor Brain called\n";
}

Brain::Brain(Brain const &brain)
{
	std::cout<< "classes copy constructor Brain called\n";
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
}

Brain &Brain::operator=(Brain const &brain)
{
	std::cout<< "Asigment operator for Brain called\n";
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout<< "classes destructor Brain called\n";
}
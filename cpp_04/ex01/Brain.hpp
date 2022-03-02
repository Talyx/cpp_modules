#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{

private:
	
public:

	std::string ideas[100];
	Brain();
	Brain(Brain const & brain);

	Brain &operator=(Brain const &brain);

	~Brain();
};

#endif
#include "Animal.hpp"

Animal::Animal():
	type("animal")
{
	std::cout<<"classes constructor Animall called\n";
}

Animal::Animal(Animal const &animal)
{
	if (this != &animal)
		this->type = animal.getType();
	std::cout<<"classes copy constructor Animall called\n";

}

Animal::~Animal()
{
	std::cout<<"classes destructor Animal called\n";
}

Animal &Animal::operator=(Animal const &animal)
{
	if (this != &animal)
		this->type = animal.getType();
	return (*this);
}

std::string Animal::getType(void) const
{
	return(this->type);
}

void	Animal::setType(std::string const &type)
{
	this->type = type;
}

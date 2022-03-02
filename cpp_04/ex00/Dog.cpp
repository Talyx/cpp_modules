#include "Dog.hpp"

Dog::Dog()
{
	setType("dog");
	std::cout<<"classes constructor Dog called\n";
}

Dog::Dog(Dog const &dog)
{
	setType(dog.getType());
	std::cout<<"classes copy constructor Dog called\n";
	
}
Dog &Dog::operator=(Dog const &dog)
{
	setType(dog.getType());
	return(*this);
}
Dog::~Dog()
{
	std::cout<<"classes destructor Dog called\n";
}

void	Dog::makeSound() const
{
	std::cout<<"wooph\n";
}
#include "Dog.hpp"

Dog::Dog()
{
	setType("dog");
	std::cout<<"classes constructor Dog called\n";
	this->brain = new Brain();
}

Dog::Dog(Dog const &dog)
{
	if (this != &dog)
	{
		setType(dog.getType());
		*(this->brain) = *(dog.getBrain());
	}
	std::cout<<"classes copy constructor Dog called\n";
	
}
Dog &Dog::operator=(Dog const &dog)
{
	std::cout << "Assignement operator for Dog called\n";
	if (this != &dog)
	{
		setType(dog.getType());
		*(this->brain) = *(dog.getBrain());
	}
	return(*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout<<"classes destructor Dog called\n";
}

void	Dog::makeSound() const
{
	std::cout<<"wooph\n";
}

Brain *Dog::getBrain(void) const
{
	return (brain);
}

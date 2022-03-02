#include "Cat.hpp"

Cat::Cat()
{
	setType("cat");
	std::cout<<"classes constructor Cat called\n";
	this->brain = new Brain();
}

Cat::Cat(Cat const &cat)
{
	if (this != &cat)
	{
		setType(cat.getType());
		*(this->brain) = *(cat.getBrain());

	}
	std::cout<<"classes copy constructor Cat called\n";
	
}
Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "Assignement operator for Cat called\n";
	if (this != &cat)
	{
		setType(cat.getType());
		*(this->brain) = *(cat.getBrain());

	}
	return(*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout<<"classes destructor Cat called\n";
}

void	Cat::makeSound() const
{
	std::cout<<"meow\n";
}

Brain *Cat::getBrain(void) const
{
	return (brain);
}
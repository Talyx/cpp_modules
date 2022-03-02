#include "Cat.hpp"

Cat::Cat()
{
	setType("cat");
	std::cout<<"classes constructor Cat called\n";
}

Cat::Cat(Cat const &cat)
{
	setType(cat.getType());
	std::cout<<"classes copy constructor Cat called\n";
	
}
Cat &Cat::operator=(Cat const &cat)
{
	setType(cat.getType());
	return(*this);
}
Cat::~Cat()
{
	std::cout<<"classes destructor Cat called\n";
}

void	Cat::makeSound() const
{
	std::cout<<"meow\n";
}
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
	type("WrongAnimal")
{
	std::cout<<"classes constructor WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &animal)
{
	this->type = animal.getType();
	std::cout<<"classes copy constructor WrongAnimal called\n";

}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"classes destructor WrongAnimal called\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &animal)
{
	this->type = animal.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

void	WrongAnimal::setType(std::string const &type)
{
	this->type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout<<"wrongAnimal says\n";
}
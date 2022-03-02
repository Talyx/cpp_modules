#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	setType("wrongCat");
	std::cout<<"classes constructor WrongCat called\n";
}

WrongCat::WrongCat(WrongCat const &cat)
{
	setType(cat.getType());
	std::cout<<"classes copy constructor WrongCat called\n";
	
}
WrongCat &WrongCat::operator=(WrongCat const &cat)
{
	setType(cat.getType());
	return(*this);
}
WrongCat::~WrongCat()
{
	std::cout<<"classes destructor WrongCat called\n";
}

void	WrongCat::makeSound() const
{
	std::cout<<"wrong meow\n";
}
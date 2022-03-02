#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(Ice const &ice): AMateria(ice.getType())
{
}

Ice &Ice::operator=(Ice const &ice)
{
	this->type = ice.getType();
	return (*this);
}

void Ice::use(ICharacter &target)
{
	std::cout<<"* shoots an ice bolt a "<<target.getName()<<" *\n";
}

AMateria *Ice::clone(void) const
{
	AMateria *am = new Ice(*this);
	return (am);
}

Ice::~Ice()
{
}

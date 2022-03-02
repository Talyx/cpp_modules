#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(Cure const &cure): AMateria(cure.getType())
{
}

Cure &Cure::operator=(Cure const &cure)
{
	this->type = cure.getType();
	std::cout << "Assignement operator for Cure called\n";
	return (*this);
}

void Cure::use(ICharacter &target)
{
	std::cout<<"* heals "<<target.getName()<<" wounds *\n";
}

AMateria *Cure::clone(void) const
{
	AMateria *am = new Cure(*this);
	return (am);
}

Cure::~Cure()
{
}

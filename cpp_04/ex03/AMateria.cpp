#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

std::string const &AMateria::getType(void)const
{
	return (type);
}

AMateria::~AMateria()
{

}

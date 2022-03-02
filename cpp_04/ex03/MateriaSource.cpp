#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &materia)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = NULL;
	}
	for (size_t i = 0; i < 4 && materia.inventory[i]; i++)
	{
		inventory[i] = materia.inventory[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materia)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = NULL;
	}
	for (size_t i = 0; i < 4 && materia.inventory[i]; i++)
	{
		inventory[i] = materia.inventory[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	size_t i = 0;

	for (; i < 4; i++)
	{
		if (!inventory[i])
			break;
	}
	if (i > 3)
		std::cout<< "Inventory full\n";
	else
		inventory[i] = materia;	
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = 0;
	while (inventory[i])
	{
		if (inventory[i]->getType() == type)
			return(inventory[i]->clone());
		i++;
	}
	std::cout<< "this material has not been studied \n";
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete	inventory[i];
	}
	
}

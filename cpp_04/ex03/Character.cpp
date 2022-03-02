#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->name = name;
	for (size_t i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
	
}

Character::Character(Character const &character)
{
	this->name = character.getName();
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = character.inventory[i];
	}

}

Character &Character::operator=(Character const &character)
{
	this->name = character.getName();
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		inventory[i] = character.inventory[i];
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	size_t i = 0;

	for (; i < 4; i++)
	{
		if (inventory[i] == NULL)
			break;
	}
	if (i > 3)
		std::cout<< "Inventory full\n";
	else
		inventory[i] = m;
}

void Character::unequip(int idx)
{
	int	i;

	i = idx;
	if (idx >= 0 && idx <= 3)
	{
		while (inventory[i] && (i + 1) < 4)
		{
			inventory[i] = inventory[i + 1];
			i++;
		}
		inventory[i] = NULL;
	}
	else
		std::cout<<"wrong idx\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{	
		if (inventory[idx])
			inventory[idx]->use(target);
		else
			std::cout<< "empty\n";
	}
	else
		std::cout << "wrong idx\n";
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	
}

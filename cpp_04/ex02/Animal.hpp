#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	type;	
public:
	Animal();
	Animal(Animal const &animal);
	virtual ~Animal();
	
	Animal &operator=(Animal const &animal);

	void	setType(std::string const &type);
	std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;
};


#endif
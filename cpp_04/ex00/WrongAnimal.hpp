#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;	
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &animal);
	virtual ~WrongAnimal();
	
	WrongAnimal &operator=(WrongAnimal const &animal);

	void	setType(std::string const &type);
	std::string	getType(void) const;
	void	makeSound(void) const;
};


#endif
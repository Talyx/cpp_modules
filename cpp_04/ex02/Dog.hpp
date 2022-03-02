#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(Dog const &dog);
	virtual ~Dog();

	Dog &operator=(Dog const &dog);
	Brain *getBrain(void) const;

	void makeSound(void) const;
};

#endif
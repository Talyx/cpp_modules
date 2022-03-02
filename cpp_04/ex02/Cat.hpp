#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(Cat const &cat);
	virtual ~Cat();

	Cat &operator=(Cat const &cat);
	Brain *getBrain(void) const;

	void makeSound(void) const;
};

#endif
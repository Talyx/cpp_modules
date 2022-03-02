#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat: public WrongAnimal
{
private:
	
public:
	WrongCat();
	WrongCat(WrongCat const &cat);
	~WrongCat();

	WrongCat &operator=(WrongCat const &cat);

	void makeSound(void) const;
};

#endif
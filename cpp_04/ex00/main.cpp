#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *meta = new Animal();
	Animal *i = new Cat();
	Animal *j = new Dog();

	std::cout<<meta->getType()<<" \n";
	std::cout<<i->getType()<<" \n";
	std::cout<<j->getType()<<" \n";

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	delete meta;
	delete i;
	delete j;

	WrongAnimal *wrongaAnimal = new WrongAnimal();
	WrongAnimal *wrongAniCat = new WrongCat();
	WrongCat	*wrongcat = new WrongCat();

	std::cout<<wrongaAnimal->getType()<<" \n";
	std::cout<<wrongAniCat->getType()<<" \n";
	std::cout<<wrongcat->getType()<<" \n";

	wrongaAnimal->makeSound();
	wrongAniCat->makeSound();
	wrongcat->makeSound();
	
	
	delete wrongaAnimal;
	
}
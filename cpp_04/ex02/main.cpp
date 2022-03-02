#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*animal[4];
	
	std::cout << "\033[31m--------------------Constructors----------------------\033[0m\n";
	animal[0] = new Dog();
	std::cout << "------------------------------------------------------\n";
	animal[1] = new Dog();
	std::cout << "------------------------------------------------------\n";
	animal[2] = new Cat();
	std::cout << "------------------------------------------------------\n";
	animal[3] = new Cat();
	std::cout << "------------------------------------------------------\n";


	std::cout << "\033[31m--------------------Destructors-----------------------\033[0m\n";
	for (size_t i = 0; i < 4; i++)
	{
		delete animal[i];
		std::cout << "------------------------------------------------------\n";
	}
	std::cout << "\033[31m		--- COPY Cat---\033[0m\n";
	{
		Cat tmp;
		std::cout << "------------------------------------------------------\n";
		Cat	tmp2;
		std::cout << "------------------------------------------------------\n";

		tmp = tmp2;
		std::cout << "tmp TYPE  " << tmp.getType()<<std::endl;
		std::cout << "tmp2 TYPE  " << tmp2.getType()<<std::endl;

		std::cout << "tmp TYPE  " << &tmp<<std::endl;
		std::cout << "tmp2 TYPE " << &tmp2<<std::endl;
	}
	std::cout << "------------------------------------------------------\n";
	std::cout << "\033[31m		--- COPY Dog---\033[0m\n";
	{
		Dog tmp;
		std::cout << "------------------------------------------------------\n";
		Dog	tmp2;
		std::cout << "------------------------------------------------------\n";

		tmp = tmp2;
		std::cout << "tmp TYPE  " << tmp.getType()<<std::endl;
		std::cout << "tmp2 TYPE  " << tmp2.getType()<<std::endl;

		std::cout << "tmp TYPE  " << &tmp<<std::endl;
		std::cout << "tmp2 TYPE " << &tmp2<<std::endl;
	}
	std::cout << "------------------------------------------------------\n";
	std::cout << "\033[31m		--- COPY Dog Heap---\033[0m\n";
	{
		Dog *tmp = new Dog();
		std::cout << "------------------------------------------------------\n";
		Dog *tmp2 = new Dog();
		std::cout << "------------------------------------------------------\n";

		*tmp = *tmp2;
		std::cout << "tmp TYPE  " << tmp->getType()<<std::endl;
		std::cout << "tmp2 TYPE  " << tmp2->getType()<<std::endl;

		std::cout << "tmp TYPE  " << tmp<<std::endl;
		std::cout << "tmp2 TYPE " << tmp2<<std::endl;
		std::cout << "------------------------------------------------------\n";
		delete tmp;
		std::cout << "------------------------------------------------------\n";
		delete tmp2;
	}
	std::cout << "------------------------------------------------------\n";
	// std::cout << "\033[31m		--- Abstract class---\033[0m\n";
	// Animal a;

}
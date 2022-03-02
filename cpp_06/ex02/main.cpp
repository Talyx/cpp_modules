#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int	randNbr = rand() % 3;
	if (randNbr == 0)
		return (new A());
	else if (randNbr == 1)
		return (new B());
	else
		return(new C());
}

void	identify(Base *p)
{
	A *a;
	B *b;
	C *c;
	if ((a = dynamic_cast<A *>(p)))
		std::cout<< "A"<< std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout<< "C" << std::endl;
}

void	identify( Base &p )
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

int main (void)
{
	std::srand(time(NULL));
	Base *test;

	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout <<"--------------------------------------\n";
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout <<"--------------------------------------\n";
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout <<"--------------------------------------\n";
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout <<"--------------------------------------\n";
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout <<"--------------------------------------\n";
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout <<"--------------------------------------\n";
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout <<"--------------------------------------\n";
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout <<"--------------------------------------\n";

}
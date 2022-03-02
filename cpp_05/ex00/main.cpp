#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat b1("biba1", 100);
		std::cout << b1 << std::endl;
		Bureaucrat b2("biba2", 55);
		std::cout << b2 << std::endl;
		Bureaucrat b3("biba3", 154);
		std::cout << b3 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr<< e.what()<< std::endl;
	}
	
	try
	{
		Bureaucrat b4("biba4", 12);
		Bureaucrat b5("biba5", 149);
		std::cout << b4 << std::endl;
		std::cout << b5 << std::endl;
		b4.increaseGrade(11);
		b5.decreaseGrade(1);
		std::cout << b4 << std::endl;
		std::cout << b5 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

}
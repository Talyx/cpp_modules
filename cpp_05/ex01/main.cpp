#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat b1("biba1", 100);
		Bureaucrat b2("biba2", 55);
		Bureaucrat b3("biba3", 154);
	}
	catch(std::exception &e)
	{
		std::cerr<< e.what()<< std::endl;
	}
	
	try
	{
		Bureaucrat b4("biba4", 12);
		Bureaucrat b5("biba5", 149);

		b4.increaseGrade(11);
		b5.decreaseGrade(1);
		std::cout << b4 << std::endl;
		std::cout << b5 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form f1("more money", 2, 3);
		Form f2("free transport", 1, 1);
		Form f3("free edu" , 2, 1);
		Bureaucrat b1("biba1", 1);
		Bureaucrat b2("biba2", 1);
		Bureaucrat b3("biba3", 5);

		f1.beSigned(b1);
		std::cout<<f1 << std::endl;
		b1.signForm(f1);
		std::cout<<f1 << std::endl;
		std::cout << b1<< std::endl;
		b2.signForm(f2);
		std::cout << f2 << std::endl;
		b1.signForm(f2);

		b3.signForm(f3);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	

}
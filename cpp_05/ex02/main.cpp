#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	
	try
	{
		Bureaucrat b2("Alex", 5);
		PresidentialPardonForm ppf1("Aboba");
		RobotomyRequestForm rrf1("alis");
		ShrubberyCreationForm scf("scf");
		ShrubberyCreationForm sss("AsciiTree");
		
		b2.executeForm(ppf1);
		b2.executeForm(rrf1);
		b2.executeForm(scf);
		std::cout<<"-------------------------------------------------\n";
		ppf1.execute(b2);
		b2.signForm(ppf1);
		ppf1.execute(b2);

		std::cout<<"-------------------------------------------------\n";

		rrf1.execute(b2);
		b2.signForm(rrf1);
		rrf1.execute(b2);
		std::cout<<"-------------------------------------------------\n";
		scf.execute(b2);
		b2.signForm(scf);
		b2.executeForm(scf);
		std::cout<<"-------------------------------------------------\n";
		b2.executeForm(sss);
		b2.signForm(sss);
		b2.executeForm(sss);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}
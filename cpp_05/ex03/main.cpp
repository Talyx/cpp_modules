#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b("Biba", 1);
		Intern someRandomIntern;
		{
			Form* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			b.executeForm(*rrf);
			b.signForm(*rrf);
			b.executeForm(*rrf);
			delete rrf;
			rrf = NULL;
			std::cout << "-----------------------------------------------------------\n";
		}
		{
			Form* rrf1;
			rrf1 = someRandomIntern.makeForm("presidential pardon", "Aboba");
			b.executeForm(*rrf1);
			b.signForm(*rrf1);
			b.executeForm(*rrf1);
			delete rrf1;
			rrf1 = NULL;
			std::cout << "-----------------------------------------------------------\n";
		}
		{
			Form* rrf2;
			rrf2 = someRandomIntern.makeForm("shrubbery creation", "Bender");
			b.executeForm(*rrf2);
			b.signForm(*rrf2);
			b.executeForm(*rrf2);
			delete rrf2;
			rrf2 = NULL;
			std::cout << "-----------------------------------------------------------\n";
		}
		{
			Form* rrf4;
			rrf4 = someRandomIntern.makeForm("robotomy request", "Bender");
			b.executeForm(*rrf4);
			b.signForm(*rrf4);
			b.executeForm(*rrf4);
			delete rrf4;
			rrf4 = NULL;
			std::cout << "-----------------------------------------------------------\n";
		}
		{
			Form *rrf3;
			rrf3 = someRandomIntern.makeForm("More money", "Aboba");
			b.executeForm(*rrf3);
			b.signForm(*rrf3);
			b.executeForm(*rrf3);
			delete rrf3;
			std::cout << "-----------------------------------------------------------\n";
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

}
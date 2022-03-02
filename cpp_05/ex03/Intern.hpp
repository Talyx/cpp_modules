#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>

class Intern
{
private:

	class wrongForm: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("This form does not exist!");
		}
	};
	
public:
	Intern();
	Intern(Intern const &intern);

	Intern &operator=(Intern const &intern);

	Form *makeForm(std::string formName, std::string target);
	Form *makeR(std::string &target);
	Form *makeS(std::string &target);
	Form *makeP(std::string &target);
	Form *makeNull(std::string &target);
	~Intern();
};

#endif
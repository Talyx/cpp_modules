#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <fstream>


class ShrubberyCreationForm: public Form
{
private:
	std::string const target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &scf);

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &scf);
	
	std::string const &getTarget(void) const;

	bool	execute(Bureaucrat const &br) const;
	~ShrubberyCreationForm();
};

#endif
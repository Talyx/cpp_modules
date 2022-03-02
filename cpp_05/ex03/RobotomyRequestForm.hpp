#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>

class RobotomyRequestForm: public Form
{
private:
	std::string const target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &rrf);
	
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rrf);

	std::string const &getTarget(void) const;

	bool	execute(Bureaucrat const &br) const;

	~RobotomyRequestForm();
};


#endif
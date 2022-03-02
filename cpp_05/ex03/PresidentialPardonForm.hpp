#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm: public Form
{
private:
	std::string const	target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(PresidentialPardonForm const & ppf);

	PresidentialPardonForm &operator=(PresidentialPardonForm const &ppf);
	
	const std::string &getTarget(void) const;

	bool	execute(Bureaucrat const &br) const;

	~PresidentialPardonForm();
};

#endif
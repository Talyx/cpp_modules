#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &inter)
{
	*this = inter;
}

Intern &Intern::operator=( Intern const &intern)
{
	(void)intern;
	return (*this);
}

Form *Intern::makeP(std::string &target)
{
	return( new PresidentialPardonForm(target));
}

Form *Intern::makeR(std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makeS(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeNull(std::string &target)
{
	(void)target;	
	// std::cout << "This form does not exist\n";
	throw Intern::wrongForm();
	return (NULL);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	int	index;

	index = 0;
	std::string funcName[3] =
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"	
	};
	Form *(Intern::*level_of_func[4])(std::string &target)=
	{
		&Intern::makeP,
		&Intern::makeR,
		&Intern::makeS,
		&Intern::makeNull
	};
	while(index < 3 && !(funcName[index] == formName))
		index++;
	return (this->*level_of_func[index])(target);
}

Intern::~Intern()
{
}


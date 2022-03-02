#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;


class Bureaucrat
{
private:
	int	const static higherGrade = 1;
	int	const static lowerGrade = 150;
	std::string const name;
	int	grade;
	Bureaucrat();
	void	checkGrade();
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &bureaucrat);

	Bureaucrat &operator=(Bureaucrat const &name);

	std::string const &getName(void) const;
	int	getGrade(void) const;

	void	increaseGrade(int how);
	void	decreaseGrade(int how);
	bool	signForm(Form &form) const;
	void	executeForm(Form const & form);

	~Bureaucrat();
public:
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Invalid grade. The grade cannot be higher than 1.\n");
			}
	};
	class GradeTooLowerException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Invalid grade. The grade cannot be lower than 150.\n");
			}
	};
};


std::ostream	&operator<<(std::ostream &ostr, const Bureaucrat &br);

#endif
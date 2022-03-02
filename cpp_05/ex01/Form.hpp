#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const name;
	int	const gradeForSigning;
	int const gradeForExecute;
	bool	sign;
	int const static lowerGrade = 150;
	int	const static higherGrade = 1;
	Form();
	void checkGrade(void);

public:
	Form(std::string const &name, int gradeForSigning, int gradeForExecute);
	Form(Form const &form);

	Form &operator=(Form const & form);

	std::string const getName(void) const;
	int	 getGradeForSigning(void)const;
	int	 getGradeForExecute(void)const;
	bool getSign(void) const;

	bool beSigned(Bureaucrat const &bureaucrat);

	~Form();

private:
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Invalid grade. The grade too higher.\n");
			}
	};
	class GradeTooLowerException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Invalid grade. The grade too lower.\n");
			}
	};
};

std::ostream	&operator<<(std::ostream &ostr, const Form &fr);

#endif
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("biba"), grade(99)
{

}

Bureaucrat::Bureaucrat(std::string const &name, int grade):
	name(name), grade(grade)
{
	checkGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat): name(bureaucrat.getName())
{
	this->grade = bureaucrat.getGrade();
	checkGrade();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	std::cout<<"The name is constant and cannot be changed \n";
	grade = bureaucrat.getGrade();
	checkGrade();
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string const &Bureaucrat::getName() const
{
	return (this->name);
}

void	Bureaucrat::checkGrade(void)
{
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowerException();
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::increaseGrade(int how)
{
	this->grade -= how;
	checkGrade();
}

void	Bureaucrat::decreaseGrade(int how)
{
	this->grade += how;
	checkGrade();
}

bool	Bureaucrat::signForm(Form &form) const
{
	bool	b;

	b = form.beSigned(*this);
	if (b)
		std::cout << this->name << " signs form - \"" << form.getName() << "\"\n";
	else
	{
		std::cout << this->name << " cannot sign form \" " << form.getName()
			<< " \" - alredi signed!\n";
	}
	return (b);
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & br)
{
	ostr << br.getName() << ", Bureaucrat grade " << br.getGrade();
	return ostr;
}

Bureaucrat::~Bureaucrat()
{
}
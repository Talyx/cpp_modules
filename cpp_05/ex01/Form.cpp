#include "Form.hpp"

Form::Form(): name("biba"), gradeForSigning(1), gradeForExecute(1), sign(false)
{
}

Form::Form(std::string const &name, int gradeForSigning, int gradeForExecute):
	name(name), gradeForSigning(gradeForSigning), gradeForExecute(gradeForExecute)
{
	checkGrade();
}

Form::Form(Form const &form):
	name(form.getName()), gradeForSigning(form.getGradeForSigning()),
	gradeForExecute(form.getGradeForExecute()), sign(false)
{
	checkGrade();
}

Form &Form::operator=(Form const &form)
{
	std::cout<<"The name is constant and cannot be changed \n";
	std::cout<<"The gradeForSigning is constant and cannot be changed \n";
	std::cout<<"The gradeForExecute is constant and cannot be changed \n";
	this->sign = form.getSign();
	return (*this);
}

std::string const Form::getName(void) const
{
	return (this->name);
}

int	 Form::getGradeForSigning(void) const
{
	return(this->gradeForSigning);
}

int	 Form::getGradeForExecute(void) const
{
	return (this->gradeForExecute);
}

bool Form::getSign(void) const
{
	return (this->sign);
}

bool Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (( bureaucrat.getGrade() <= this->gradeForSigning) && !this->sign)
	{
		this->sign = true;
	}
	else if (this->sign)
		return (false);
	else
		throw Form::GradeTooLowerException();
	return (this->sign);
}

void Form::checkGrade(void)
{
	if ((this->gradeForSigning < higherGrade) ||( this->gradeForExecute < higherGrade))
		throw Form::GradeTooHighException();
	else if ((this->gradeForSigning > lowerGrade) ||( this->gradeForExecute > lowerGrade))
		throw Form::GradeTooLowerException();
}

std::ostream &	operator<<( std::ostream & ostr, Form const & fr)
{
	ostr << fr.getName() << ", grade for signing = " <<fr.getGradeForSigning() 
		<< ", grade for execute = " << fr.getGradeForExecute()
		<< ", and sign status = ";
	if (fr.getSign())
		ostr<< "true!\n";
	else
		ostr<< "false!\n";
	return ostr;
}

Form::~Form()
{
}
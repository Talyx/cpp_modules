#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45), target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ppf):
	Form("RobotomyRequestForm", 72, 45), target(ppf.getTarget())
{
	*this = ppf;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ppf)
{
	std::cout <<"cannot copy\n";
	ppf.getName();
	return (*this);
}

std::string const &RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

bool RobotomyRequestForm::execute(Bureaucrat const &br) const
{
	bool b;

	b = checkExe(br);
	if (b)
	{
		std::cout<< "* bRRRRRRR *\n";
		if ((std::rand() % 2) == 1)
			std::cout << this->target  << " has been robotomized successfully 50% of the time\n";
		else
			std::cout << "The robomotization on "<< this->target << " failed\n";
	}
	else
		std::cout << "Form not signed\n";
	return (b);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}



#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5), target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ppf):
	Form("PresidentialPardonForm", 25, 5), target(ppf.getTarget())
{
	*this = ppf;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &ppf)
{
	std::cout <<"cannot copy\n";
	ppf.getName();
	return (*this);
}

std::string const &PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

bool PresidentialPardonForm::execute(Bureaucrat const &br) const
{
	bool b;

	b = checkExe(br);
	if (b)
		std::cout<<this->target<< " has been pardoned by Zafod Beeblebrox\n";
	else
		std::cout << "Form not signed\n";
	return (b);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}



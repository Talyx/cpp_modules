#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ppf):
	Form("ShrubberyCreationForm", 145, 137), target(ppf.getTarget())
{
	*this = ppf;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ppf)
{
	std::cout <<"cannot copy\n";
	ppf.getName();
	return (*this);
}

std::string const &ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

bool ShrubberyCreationForm::execute(Bureaucrat const &br) const
{
	bool b;
	std::ofstream	tree;
	std::string		filename;

	filename = this->target + "_shrubbery";
	b = checkExe(br);
	if (b)
	{
		tree.open(filename.c_str());
		tree <<"                                           ."<<std::endl;
		tree <<"                                              .         ;  "<<std::endl;
		tree <<"                 .              .              ;%     ;;   "<<std::endl;
		tree <<"                   ,           ,                :;%  %;   "<<std::endl;
		tree <<"                    :         ;                   :;%;'     .,   "<<std::endl;
		tree <<"           ,.        %;     %;            ;        %;'    ,;"<<std::endl;
		tree <<"             ;       ;%;  %%;        ,     %;    ;%;    ,%'"<<std::endl;
		tree <<"              %;       %;%;      ,  ;       %;  ;%;   ,%;' "<<std::endl;
		tree <<"               ;%;      %;        ;%;        % ;%;  ,%;'"<<std::endl;
		tree <<"                `%;.     ;%;     %;'         `;%%;.%;'"<<std::endl;
		tree <<"                 `:;%.    ;%%. %@;        %; ;@%;%'"<<std::endl;
		tree <<"                    `:%;.  :;bd%;          %;@%;'"<<std::endl;
		tree <<"                      `@%:.  :;%.         ;@@%;' "<<std::endl;
		tree <<"                        `@%.  `;@%.      ;@@%;   "<<std::endl;
		tree <<"                          `@%%. `@%%    ;@@%;    "<<std::endl;
		tree <<"                            ;@%. :@%%  %@@%;     "<<std::endl;
		tree <<"                              %@bd%%%bd%%:;     "<<std::endl;
		tree <<"                                #@%%%%%:;;"<<std::endl;
		tree <<"                                %@@%%%::;"<<std::endl;
		tree <<"                                %@@@%(o);  . '"<<std::endl;
		tree <<"                                %@@@o%;:(.,'  "<<std::endl;
		tree <<"                            `.. %@@@o%::;     "<<std::endl;
		tree <<"                               `)@@@o%::;     "<<std::endl;
		tree <<"                                %@@(o)::;     "<<std::endl;
		tree <<"                               .%@@@@%::;     "<<std::endl;
		tree <<"                               ;%@@@@%::;.    "<<std::endl;
		tree <<"                              ;%@@@@%%:;;;. "<<std::endl;
		tree <<"                          ...;%@@@@@%%:;;;;,..    "<<std::endl;
		tree.close();
	}
	else
		std::cout << "Form not signed\n";
	return (b);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


#include "FragTrap.hpp"

FragTrap::FragTrap():
	ClapTrap("")
{

	this->hitpoint = 100;
	this->energiPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string const &name):
	ClapTrap(name)
{
	this->name = name;
	this->hitpoint = 100;
	this->energiPoint = 100;
	this->attackDamage = 30;
	std::cout<<"\033[34mclasses consturctor FragTrap \033[31m"<< name<<"\033[34m called\033[0m\n";

}

FragTrap::FragTrap(FragTrap const &frag):
	ClapTrap(frag.name)
{
	this->name = frag.name;
	this->hitpoint = 100;
	this->energiPoint = 100;
	this->attackDamage = 30;
	std::cout<<"\033[34mclasses consturctor FragTrap \033[31m"<< name<<"\033[34m called\033[0m\n";

}

FragTrap::~FragTrap()
{
	std::cout<<"\033[34mclasses destrucor FragTrap \033[31m"<<this->name<<"\033[34m called\033[0m\n";

}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	this->name = copy.name;
	this->hitpoint = copy.hitpoint;
	this->energiPoint = copy.energiPoint;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

void FragTrap::attack(std::string const & target)
{
	std::cout<<"\033[34mFragTrap \033[31m"<<this->name<< " \033[34mattack \033[31m"
		<<target<<", \033[34mcausing \033[31m"<<this->attackDamage
		<< " \033[34mpoint of damage!\033[0m\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout<<"\033[31m"<<this->name<<"\033[34m give a big high five!!! \033[0m\n";
}
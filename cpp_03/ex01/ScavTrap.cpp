#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("")
{
	// this->name = "";
	this->hitpoint = 100;
	this->energiPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name):
	ClapTrap(name)
{
	this->name = name;
	this->hitpoint = 100;
	this->energiPoint = 50;
	this->attackDamage = 20;
	std::cout<<"\033[32mclasses consturctor ScavTrap \033[31m"<< name<<"\033[32m called\033[0m\n";
}

ScavTrap::ScavTrap(ScavTrap const &scav):
	ClapTrap(scav.name)
{
	this->name = scav.name;
	this->hitpoint = scav.hitpoint;
	this->energiPoint = scav.energiPoint;
	this->attackDamage = scav.attackDamage;
	std::cout<<"\033[32mclasses copy constructor ScavTrap \033[31m"<<scav.name<<"\033[32m called\033[0m\n";
}

ScavTrap::~ScavTrap()
{
	std::cout<<"\033[32mclasses destrucor ScavTrap \033[31m"<<this->name<<"\033[32m called\033[0m\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	this->name = copy.name;
	this->hitpoint = copy.hitpoint;
	this->energiPoint = copy.energiPoint;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout<<"\033[32mScavTrap \033[31m"<<this->name<< " \033[32mattack \033[31m"
		<<target<<", \033[32mcausing \033[31m"<<this->attackDamage
		<< " \033[32mpoint of damage!\033[0m\n";
}
void ScavTrap::guardGate(void)
{
	std::cout<<"\033[31m"<<this->name<<"\033[32m enter in Gate keeper mode!!!\033[0m\n";
}

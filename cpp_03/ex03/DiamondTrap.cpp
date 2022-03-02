#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	ClapTrap(""), ScavTrap(""), FragTrap("")
{
	this->name = "";
	ClapTrap::name += "_clap_name";
	this->hitpoint = FragTrap::hitpoint;
	this->energiPoint = ScavTrap::getEnergiPoint();
	this->attackDamage = FragTrap::attackDamage;
	std::cout<<"\033[33mclasses consturctor DiamondTrap \033[31m"<< name<<"\033[33m called\033[0m\n";
}

DiamondTrap::DiamondTrap(std::string const &name): 
	ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	DiamondTrap::name = name;
	ClapTrap::name += "_clap_name";
	this->hitpoint = FragTrap::hitpoint;
	this->energiPoint = ScavTrap::getEnergiPoint();
	this->attackDamage = FragTrap::attackDamage;
	std::cout<<"\033[33mclasses consturctor DiamondTrap \033[31m"<< name<<"\033[33m called\033[0m\n";

	// std::cout << this->name << " "<< this->hitpoint << " " << this->energiPoint << " " << attackDamage<< std::endl;

}

DiamondTrap::DiamondTrap(DiamondTrap const &diamond): 
	ClapTrap(diamond.name), ScavTrap(diamond.name), FragTrap(diamond.name)
{
	DiamondTrap::name = diamond.name;
	ClapTrap::name = diamond.name + "_clap_name";
	this->hitpoint = FragTrap::hitpoint;
	this->energiPoint = ScavTrap::getEnergiPoint();
	this->attackDamage = FragTrap::attackDamage;
	std::cout<<"\033[33mclasses copy constructor DiamondTrap \033[31m"<<diamond.name<<"\033[33m called\033[0m\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"\033[33mclasses destrucor DiamondTrap \033[31m"<<this->name<<"\033[33m called\033[0m\n";

}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
	DiamondTrap::name = copy.name;
	ClapTrap::name = copy.name + "_clap_name";
	this->hitpoint = copy.hitpoint;
	this->energiPoint = copy.energiPoint;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout<<"\033[33mMy class name \033[31m"<<this->name<<" \033[33m!!!\n";
	std::cout<<"\033[33mMy ClapTrap name \033[31m"<<ClapTrap::name<<" \033[33m!!!\n";
}
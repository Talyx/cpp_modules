#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "";
	this->hitpoint = 10;
	this->energiPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const & name)
{
	std::cout<< "\033[35mclass constructor ClapTrap \033[31m"
			<<name<<"\033[0m \033[35mcalled\033[0m\n";
	this->name = name;
	this->hitpoint = 10;
	this->energiPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	this->name = copy.name;
	this->hitpoint = copy.hitpoint;
	this->energiPoint = copy.energiPoint;
	this->attackDamage = copy.attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"\033[35mclass desturctor ClapTrap \033[31m"
			<<name<<"\033[0m \033[35mcalled\033[0m\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	this->name = copy.name;
	this->hitpoint = copy.hitpoint;
	this->energiPoint = copy.energiPoint;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout<<"\033[35mClapTrap \033[31m"<<this->name<< " \033[35mattack \033[31m"
			<<target<<", \033[35mcausing \033[31m"<<this->attackDamage
			<< " \033[35mpoint of damage!\033[0m\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	damage;

	damage = this->hitpoint - amount;
	if (damage > this->hitpoint)
		std::cout<<"\033[35mAttack amount cannot be less than zero!\033[0m\n";
	else if (damage <= 0)
	{
		std::cout<<"\033[31m"<<this->name
			<<" \033[35mreceived damage exceeding the number of hit points and destroed.\033[0m\n";
		this->hitpoint = 0;
	}
	else
	{
		std::cout<<"\033[31m"<<this->name
			<< " \033[35mtake \033[31m"<<amount
			<<" \033[35mpoint of damage, but stayed alive!\033[0m\n";
		this->hitpoint = damage;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoint == 0)
		std::cout<<"\033[31m"
			<<this->name <<" \033[35mdestroed and impossible to repair...\033[0m\n";
	else
	{
		this->hitpoint = this->hitpoint + amount;
		std::cout<<"\033[31m"<< this->name << " \033[35mhas been repaired by \033[31m"
			<< amount<<" \033[35mpoints, and now has \033[31m"
			<<this->hitpoint<<" \033[35mhit points!\033[0m\n";
	}
}
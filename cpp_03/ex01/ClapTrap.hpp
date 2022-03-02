#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int			hitpoint;
	int			energiPoint;
	int			attackDamage;
	ClapTrap();
public:
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const &copy);
	virtual ~ClapTrap();

	ClapTrap &operator=(ClapTrap const &copy);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif
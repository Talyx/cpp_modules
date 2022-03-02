#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
private:
	FragTrap();
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &frag);
	void highFivesGuys(void);

	FragTrap &operator=(FragTrap const &scav);

	void	attack(std::string const & target);
	~FragTrap();
};


#endif
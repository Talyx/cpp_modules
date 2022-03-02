#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &scav);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &scav);

	void 	guardGate( void );
	void	attack(std::string const & target);
};

#endif
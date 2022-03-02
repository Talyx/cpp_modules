#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
protected:
	ScavTrap();
	int		getEnergiPoint(void);
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &scav);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &scav);

	void 	guardGate( void );
	void	attack(std::string const & target);
};

#endif
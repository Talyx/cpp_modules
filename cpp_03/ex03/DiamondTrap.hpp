#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
	DiamondTrap();
public:
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &diamond);
	~DiamondTrap();

	DiamondTrap &operator=(DiamondTrap const &scav);

	void	attack(std::string const & target);
	void whoAmI(void);
};

#endif
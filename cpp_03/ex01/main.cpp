#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap roma("ROMS");
	ScavTrap biba("BIBA");
	ClapTrap oleg("OLEGE");

	roma.attack("BIBA");
	biba.takeDamage(20);
	oleg.attack("ROMA");
	roma.takeDamage(0);
	biba.attack("OLEGE");
	oleg.takeDamage(20);

	roma.guardGate();
	biba.guardGate();

	roma.beRepaired(0);
	biba.beRepaired(20);
	oleg.beRepaired(20);
	return (0);
}
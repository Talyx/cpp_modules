#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap vlad("VLADIC");	
	ScavTrap roma("ROMA");
	ScavTrap biba("BIBA");
	ClapTrap oleg("OLEGE");


	roma.attack("BIBA");
	biba.takeDamage(20);
	oleg.attack("ROMA");
	roma.takeDamage(0);
	biba.attack("OLEGE");
	oleg.takeDamage(20);
	vlad.attack("ROMA");
	roma.takeDamage(30);
	roma.attack("VLADIC");
	vlad.takeDamage(20);

	roma.guardGate();
	biba.guardGate();
	vlad.highFivesGuys();

	roma.beRepaired(0);
	biba.beRepaired(20);
	oleg.beRepaired(20);
	vlad.beRepaired(20);
	return (0);
}
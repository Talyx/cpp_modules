#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap slava("SLAVIC");
	std::cout << "----------------------------------\n";
	DiamondTrap sasha(slava);
	std::cout << "----------------------------------\n";
	FragTrap vlad("VLADIC");
	std::cout << "----------------------------------\n";
	ScavTrap roma("ROMA");
	std::cout << "----------------------------------\n";
	ScavTrap biba("BIBA");
	std::cout << "----------------------------------\n";
	ClapTrap oleg("OLEGE");
	std::cout << "----------------------------------\n";

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
	slava.attack("ROMA");
	slava.takeDamage(20);
	
	slava.guardGate();
	roma.guardGate();
	biba.guardGate();
	vlad.highFivesGuys();
	slava.highFivesGuys();

	roma.beRepaired(0);
	biba.beRepaired(20);
	oleg.beRepaired(20);
	vlad.beRepaired(20);
	slava.beRepaired(10);
	slava.whoAmI();
	sasha.whoAmI();

	return (0);
}
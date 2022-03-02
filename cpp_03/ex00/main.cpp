#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	clap("BIBA");
	ClapTrap	roma("ROMA");

	clap.attack("ROMA");
	clap.takeDamage(8);
	clap.beRepaired(6);

	clap = roma;
	clap.attack("ROMA");
	clap.takeDamage(8);
	clap.beRepaired(6);

}
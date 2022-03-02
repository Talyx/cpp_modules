#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	int		N;

	N = 5;
	Zombie *zombie = zombieHorde(N, "ABOBUS");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;
}
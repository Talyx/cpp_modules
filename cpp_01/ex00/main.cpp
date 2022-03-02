#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
	Zombie inStack("in Stack");
	Zombie *inHeap = new Zombie("in Heap");
	Zombie *newzom = newZombie("ABOBA");
	inStack.announce();
	inHeap->announce();
	newzom->announce();
	randomChump("biba");
	delete inHeap;
	delete newzom;
}
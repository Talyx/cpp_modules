#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon& club;
public:
	void attack(void);
	HumanA(std::string name,  Weapon& club);
	~HumanA();
};



#endif
#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout<<"Zombie was constructed\n";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<<"Zombie "<<this->name<<" constructed\n";
}

Zombie::~Zombie()
{
    std::cout<< "Zombie "<<this->name<< " destructed."<<std::endl;
}

void    Zombie::announce(void)
{
    std::cout<<"<"<<this->name<<">  BraiiiiiiinnnzzzZ.."<<std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void)
{
    return (this->name);
}

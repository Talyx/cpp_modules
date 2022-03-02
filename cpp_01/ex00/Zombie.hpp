#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie;

class Zombie
{
private:
    Zombie();
    std::string name;
public:
    void announce(void);
    Zombie* newZombie(std::string name);
    void randomChump(std::string name);
    void setName(std::string name);
    std::string getName(void);
    Zombie(std::string name);
    ~Zombie();
};




#endif
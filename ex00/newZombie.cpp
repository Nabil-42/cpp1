#include "Zombie.hpp"
#include "newZombie.hpp"


NewZombie::NewZombie()
{

}

Zombie* NewZombie::newZombie(std::string name)
{
    Zombie* ptr = new Zombie();
    ptr->getName(name);
    return ptr;
}


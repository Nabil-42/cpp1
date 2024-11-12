#include "Zombie.hpp"
#include "newZombie.hpp"

Zombie::zombie()
{

}

void Zombie::getName(std::string name)
{
    _nom = name;
}

std::string Zombie::setName()
{
    return _nom;
}

void Zombie::announce()
{
    if (nom == "Foo")
         std::cout << nom << ":  BraiiiiiiinnnzzzZ..." << std::endl;
   else (std::cout << "<" << nom << ">:  BraiiiiiiinnnzzzZ..." << std::endl;)
}
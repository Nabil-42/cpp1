#include "Zombie.hpp"
#include "newZombie.hpp"

Zombie::Zombie()
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
    if (_nom == "Foo")
         std::cout << _nom << ":  BraiiiiiiinnnzzzZ..." << std::endl;
   else (std::cout << "<" << _nom << ">:  BraiiiiiiinnnzzzZ..." << std::endl);
}
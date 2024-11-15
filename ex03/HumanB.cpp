#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << _name <<  " attacks with their" 
            << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string name)
{
    setType(name);
}

std::string Weapon::getType()
{
    return _type;
}

void Weapon::setType(std::string name)
{
    _type = name;
}
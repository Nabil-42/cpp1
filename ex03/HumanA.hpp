#ifndef HUMAN_A
#define HUMAN_A

#include <string>
#include <iostream>

class HumanA
{
    public:
    HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){}
    void attack();

    private:
    std::string _name;
    Weapon& _weapon;
    
};

#endif
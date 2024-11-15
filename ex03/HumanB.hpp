#ifndef HUMAN_B
#define HUMAN_B

#include <string>
#include <iostream>

class HumanB
{
    public:
    HumanB(){}
    HumanB(std::string name) : _name(name){}
    void attack();
    void setWeapon(Weapon& weapon);

    private:
    Weapon* _weapon;
    std::string _name;
    
};

#endif
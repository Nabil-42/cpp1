#ifndef WEAPON
#define WEAPON

#include <string>
#include <iostream>

class Weapon
{
    public:
    Weapon();
    Weapon(std::string weapon);
    std::string getType();
    void setType(std::string name);

    private:
    std::string _type;
};

#endif
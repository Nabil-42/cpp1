#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        void announce();
        void getName(std::string name);
        std::string setName();

    private:
        std::string _nom;

};

#endif


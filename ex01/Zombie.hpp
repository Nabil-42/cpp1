#ifndef ZOMBIE
#define ZOMBIE

#include <string>
#include <iostream>

class Zombie
{
    public:
    Zombie();
    Zombie(std::string name);
    Zombie* zombieHorde(int N, std::string name);
    void announce();

    ~Zombie();

    private:
    std::string _name;
    Zombie* _ptr;
    
};

#endif 
#include "Zombie.hpp"
#include "newZombie.hpp"

int main()
{
    std::string name;
    std::cout << "zombie static name = ";
    std::cin >> name;
    NewZombie z;
    z.randomChump(name);
    
    std::cout << "zombie heap name = ";
    std::cin >> name;
    Zombie* ptr = z.newZombie(name);
    ptr->announce();
    delete ptr;
}
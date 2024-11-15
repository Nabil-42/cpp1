#include "Zombie.hpp"

int main()
{
    std::string name;
    std::cout << "name of zombies = ";
    std::cin >> name;
    Zombie z(name);
    Zombie* ptr = z.zombieHorde(3, "bob");
    for(int i = 0; i < 3; ++i)
        ptr[i].announce();
    delete[] ptr;
}
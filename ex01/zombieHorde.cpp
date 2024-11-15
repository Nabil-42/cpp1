#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    _ptr = new Zombie[N];
    for (int i = 0; i < N; ++i)
        _ptr[i] = Zombie(name);
    return _ptr;
}

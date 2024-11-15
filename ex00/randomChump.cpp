#include "Zombie.hpp"
#include "newZombie.hpp"

void NewZombie::randomChump( std::string name )
{
    Zombie z;
    z.getName(name);
    z.announce();
}
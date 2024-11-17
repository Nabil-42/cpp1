#include "Harl.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
        return std::cerr << "Error: Number of argument " << std::endl, 1;
    Harl Harl;
    Harl.complain(argv[1]);
}
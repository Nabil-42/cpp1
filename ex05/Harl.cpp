#include "Harl.hpp"

void Harl::complain(std::string level)
{
    void (Harl::*tab_ptr[])(void) = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,        
    &Harl::error      
    };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; ++i)
    {
        if (level == levels[i])
            {
                std::cout << "[ " << levels[i] << " ]" << std::endl;
                (this->*tab_ptr[i])();
                return;
            }
    }
    std::cout << " Probably complaining about insignificant problems" << std::endl;
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void Harl::info()
{
    std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "his is unacceptable ! I want to speak to the manager now." << std::endl;
}
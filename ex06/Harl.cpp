#include "Harl.hpp"

void ft_switch(int index, void(Harl::*tab_ptr[])(void), Harl* harl)
{
    switch (index)
    {
    case 0:
        (harl->*tab_ptr[0])(),(harl->*tab_ptr[1])(),(harl->*tab_ptr[2])(),(harl->*tab_ptr[3])();
        break;
    case 1:
        (harl->*tab_ptr[1])(),(harl->*tab_ptr[2])(),(harl->*tab_ptr[3])();
        break;
    case 2:
        (harl->*tab_ptr[2])(),(harl->*tab_ptr[3])();
        break;
    case 3:
        (harl->*tab_ptr[3])();
        break;
    default:
        std::cout << " Probably complaining about insignificant problems" << std::endl;
        
    }
}

void Harl::complain(std::string level)
{
    void (Harl::*tab_ptr[])(void) = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,        
    &Harl::error
    };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    int index = -1;
    for (int i = 0; i < 4; ++i)
    {
        if (level == levels[i])
            {
                index = i;
                break;
            }
    }
    ft_switch(index, tab_ptr, this);
}



void Harl::debug()
{   
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "his is unacceptable ! I want to speak to the manager now." << std::endl;
}
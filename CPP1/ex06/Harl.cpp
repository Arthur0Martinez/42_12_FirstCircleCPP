#include "Harl.hpp"
#include <iostream>


Harl::Harl()
{

}

void Harl::debug() 
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::filterComplain(std::string level)
{
    int levelIndex = -1;
    void (Harl::*allComplaints[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            levelIndex = i;
            break ;
        }
    }
    switch (levelIndex)
    {
        case 0:
            (this->*allComplaints[0])();
        case 1:
            (this->*allComplaints[1])();
        case 2:
            (this->*allComplaints[2])();
        case 3:
            (this->*allComplaints[3])();    
            break;
        default:
            std::cerr << "Invalid level. DEBUG, INFO, WARNING, ERROR are available." << std::endl;
            break;
    }
}

Harl::~Harl()
{

}
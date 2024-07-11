#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{

}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string darksecret)
{
    this->firstname = firstname;
    this->lastname = lastname;
    this->nickname = nickname;
    this->phone = phone;
    this->darksecret = darksecret;
}

void    Contact::printContact()
{
    std::string temp;

    if (firstname.length() > 10)
    {
        temp = firstname.substr(0, 10);
        temp += ".";
        std::cout << std::setw(10) << std::right << temp << " | ";
    }
    else
        std::cout << std::setw(10) << std::right << firstname << " | ";

    if (lastname.length() > 10)
    {
        temp = lastname.substr(0, 10);
        temp += ".";
        std::cout << std::setw(10) << std::right << temp << " | ";
    }
    else
        std::cout << std::setw(10) << std::right << lastname << " | ";

    if (nickname.length() > 10)
    {
        temp = nickname.substr(0, 10);
        temp += ".";
        std::cout << std::setw(10) << std::right << temp << " | ";
    }
    else
        std::cout << std::setw(10) << std::right << nickname << " | ";

    if (phone.length() > 10)
    {
        temp = phone.substr(0, 10);
        temp += ".";
        std::cout << std::setw(10) << std::right << temp << " | ";
    }
    else
        std::cout << std::setw(10) << std::right << phone << " | ";

    if (darksecret.length() > 10)
    {
        temp = darksecret.substr(0, 10);
        temp += ".";
        std::cout << std::setw(10) << std::right << temp << " | " << std::endl;
    }
    else 
        std::cout << std::setw(10) << std::right << darksecret << std::endl;
}

void    Contact::printContact1Line()
{
    std::cout << firstname << std::endl << lastname << std::endl << nickname << std::endl << phone << std::endl << darksecret << std::endl;
}

Contact::~Contact()
{

}
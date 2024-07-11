#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string> 
#include <iostream>
#include <iomanip>

class Contact
{
public:
    Contact();
    Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string darksecret);
    ~Contact();
    void    printContact();
    void    printContact1Line();


private:
    std::string lastname;
    std::string nickname;
	std::string firstname;
    std::string phone;
    std::string	darksecret;
};

#endif
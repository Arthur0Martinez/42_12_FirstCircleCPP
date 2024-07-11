#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string> 


class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void addContact(std::string firstname, std::string lastname, std::string nickname, std::string number, std::string darksecret);
    void searchContact();
    void printContact(int index);

private:
    Contact contacts[8];
    int nbr_contact;
};

#endif
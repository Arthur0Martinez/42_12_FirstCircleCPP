#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    nbr_contact = 0;
}

void PhoneBook::addContact(std::string firstname, std::string lastname, std::string nickname, std::string number, std::string darksecret)
{
    if (this->nbr_contact < 8)
    {
        this->contacts[this->nbr_contact++] = Contact(firstname, lastname, nickname, number, darksecret);
    }
    else
    {
        for (int i = 7; i > 0; i--)
        {
            this->contacts[i] = this->contacts[i - 1];
        }
        this->contacts[0] = Contact(firstname, lastname, nickname, number, darksecret);
    }
}

void PhoneBook::searchContact()
{
    int i = 0;

    while(i < this->nbr_contact)
    {
        this->contacts[i].printContact();
        i++;
    }
}

void PhoneBook::printContact(int index)
{
    if (index <= 0 || index > 8 )
    {
        std::cerr << "Erreur dans l'index rentre, merci de mettre uniquement un nombre entre 1 et 8" << std::endl;
        return ;
    }
    if (index > this->nbr_contact)
    {
        std::cerr << "Pas de contact n. " << index << " dans le repertoire" << std::endl;
        return ;
    }
    this->contacts[index - 1].printContact1Line();
}

PhoneBook::~PhoneBook()
{
    return ;
}
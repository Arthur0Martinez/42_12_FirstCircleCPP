/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:48:42 by artmarti          #+#    #+#             */
/*   Updated: 2024/01/08 15:48:46 by artmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main (void)
{
	PhoneBook	phonebook;
	std::string	word;
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	number;
	std::string	darksecret;
	std::string	indexStr;
	int			index;


	while(word != "EXIT")
	{
		std::cout << "Bienvenue sur le PhoneBook ! Taper votre commande : ";
		std::cin >> word;
		if (word == "EXIT")
			break ;
		else if (word == "ADD")
		{
			while(firstname.empty())
			{
				std::cout << "Veuillez entre votre prenom : ";
				std::cin >> firstname;
			}
			while(lastname.empty())
			{
				std::cout << "Veuillez entre votre nom : ";
				std::cin >> lastname;
			}
			while(nickname.empty())
			{
				std::cout << "Veuillez entre votre surnom : ";
				std::cin >> nickname;
			}
			while(number.empty())
			{
				std::cout << "Veuillez entre votre numero de telephone : ";
				std::cin >> number;
			}
			while(darksecret.empty())
			{
				std::cout << "Veuillez entre votre plus obscur secret : ";
				std::cin >> darksecret;
			}
			phonebook.addContact(firstname, lastname, nickname, number, darksecret);
			firstname.clear();
			lastname.clear();
			nickname.clear();
			number.clear();
			darksecret.clear();
		}
		else if (word == "SEARCH")
		{
			phonebook.searchContact();
			std::cout << "Veuillez entrer l'index du contact recherche : ";
			std::cin >> indexStr;
			std::istringstream iss(indexStr);
			if (!(iss >> index))
			{
				std::cerr << "L'index rentre n'est pas un nombre valide" << std::endl;
			}
			else
				phonebook.printContact(index);
		}
	}
	return 0;
}


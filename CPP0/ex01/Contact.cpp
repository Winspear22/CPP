/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:34:06 by user42            #+#    #+#             */
/*   Updated: 2022/04/18 15:59:26 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::donnees_nom[5] =
{
	"First name : ",
	"Last name : ",
	"Nickname : ",
	"Phone number : ",
	"Darkest secret : "
};

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

std::string Contact::get_firstname(std::string tmp) //const
{
	this->first_name = tmp;
	return (this->first_name);
}

std::string Contact::get_lastname(std::string tmp) //const
{
	this->last_name = tmp;
	return (this->last_name);
}

std::string Contact::get_nickname(std::string tmp)// const
{
	this->nickname = tmp;
	return (this->nickname);
}

std::string Contact::get_phonenumber(std::string tmp) //const
{
	this->phone_number = tmp;
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(std::string tmp)
{
	this->darkest_secret = tmp;
	return (this->darkest_secret);
}

Contact Contact::write_informations(void)
{
	Contact new_contact;
	std::string tmp;

	std::cout << "Please enter : " << std::endl << donnees_nom[0];// << std::endl;
	getline(std::cin, tmp);
	while (tmp.empty() == true)
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mfirst name : \033[0m";
		getline(std::cin, tmp);
	}
	new_contact.get_firstname(tmp);
	std::cout << "Please enter : " << std::endl << donnees_nom[1];// << std::endl;
	getline(std::cin, tmp);
	while (tmp.empty() == true)
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mlast name : \033[0m";
		getline(std::cin, tmp);
	}
	new_contact.get_lastname(tmp);
	std::cout << "Please enter : " << std::endl << donnees_nom[2];// << std::endl;
	getline(std::cin, tmp);
	while (tmp.empty() == true)
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mnickname : \033[0m";
		getline(std::cin, tmp);
	}
	new_contact.get_nickname(tmp);
	std::cout << "Please enter : " << std::endl << donnees_nom[3];// << std::endl;
	getline(std::cin, tmp);
	while (tmp.empty() == true)
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mphone number : \033[0m";
		getline(std::cin, tmp);
	}
	new_contact.get_phonenumber(tmp);
	std::cout << "Please enter : " << std::endl << donnees_nom[4];// << std::endl;
	getline(std::cin, tmp);
	while (tmp.empty() == true)
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mphone number : \033[0m";
		getline(std::cin, tmp);
	}
	new_contact.get_darkest_secret(tmp);
	return (new_contact);
}
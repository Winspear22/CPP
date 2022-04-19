/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:34:06 by user42            #+#    #+#             */
/*   Updated: 2022/04/19 15:01:42 by user42           ###   ########.fr       */
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

std::string Contact::get_firstname(void) const
{
	return (this->_first_name);
}

std::string Contact::get_lastname(void) const
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_phonenumber(void) const
{
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

bool Contact::set_firstname(std::string tmp)
{
	this->_first_name = tmp;
	return (true);
}

bool Contact::set_lastname(std::string tmp)
{
	this->_last_name = tmp;
	return (true);
}

bool Contact::set_nickname(std::string tmp)
{
	this->_nickname = tmp;
	return (true);
}

bool Contact::set_phonenumber(std::string tmp)
{
	this->_phone_number = tmp;
	return (true);
}

bool Contact::set_darkest_secret(std::string tmp)
{
	this->_darkest_secret = tmp;
	return (true);
}

Contact Contact::write_informations(void)
{
	Contact new_contact;
	std::string tmp;

	std::cout << "Please enter : " << std::endl << donnees_nom[0];
	getline(std::cin, tmp);
	while (tmp.empty() == true && getline(std::cin, tmp))
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mfirst name : \033[0m";
	}
	new_contact.set_firstname(tmp);
	std::cout << "Please enter : " << std::endl << donnees_nom[1];
	getline(std::cin, tmp);
	while (tmp.empty() == true && getline(std::cin, tmp))
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mlast name : \033[0m";
	}
	new_contact.set_lastname(tmp);
	std::cout << "Please enter : " << std::endl << donnees_nom[2];
	getline(std::cin, tmp);
	while (tmp.empty() == true && getline(std::cin, tmp))
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mnickname : \033[0m";
	}
	new_contact.set_nickname(tmp);
	std::cout << "Please enter : " << std::endl << donnees_nom[3];
	getline(std::cin, tmp);
	while (tmp.empty() == true && getline(std::cin, tmp))
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mphone number : \033[0m";
	}
	new_contact.set_phonenumber(tmp);
	std::cout << "Please enter : " << std::endl << donnees_nom[4];
	getline(std::cin, tmp);
	while (tmp.empty() == true && getline(std::cin, tmp))
	{
		std::cout << "\033[1;31mError. You cannot leave this empty\n\033[0m";
		std::cout << "Please type your \033[1;37mphone number : \033[0m";
	}
	new_contact.set_darkest_secret(tmp);
	std::cout << "\033[1;32mContact successfully added ! :)\033[0m" << std::endl;
	return (new_contact);
}
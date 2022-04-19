/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:34:41 by user42            #+#    #+#             */
/*   Updated: 2022/04/19 05:06:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

std::string PhoneBook::limit_info(std::string str)
{
	if (str.length() >= 10)
		str = str.substr(0, 9).append(".");
	return (str);
}

void PhoneBook::find_contacts(Contact *contacts, int index)
{
	int i;
	int search;

	search = 0;
	i = 0;
	if (index == 0 && contacts->first_name.length() == 0)
	{
		std::cout << "\033[1;31mError. You don't have enough contact to use that command.\033[0m" << std::endl;
		return;
	}
	std::cout << std::setfill(' ') << std::setw(10) << "Index";
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "First name";
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "Last name";
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "Nickname";
	std::cout << " | " << std::endl;
	while (i < index)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i + 1;
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << limit_info(contacts[i].first_name);
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << limit_info(contacts[i].last_name);
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << limit_info(contacts[i].nickname);
		std::cout << " | ";

		std::cout << std::endl;
		i++;
	}
	std::cout << "Please choose the contact you want to see." << std::endl << "> ";
	while (!(std::cin >> search) || (search < 1 || search >= index + 1))
	{
		std::cout << "\033[1;31mError. Adaloui's phonebook™ only contains\033[1;33m " << index << "\033[1;31m contacts.\033[0m" << std::endl;
		std::cout << "\033[1;37mPlease type a number ranging between \033[1;32m1 and " << index << ".\033[0m" << std::endl;
		std::cout << "> ";
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	std::cout << "First name : " << contacts[search - 1].first_name << std::endl;
	std::cout << "Last name : " << contacts[search - 1].last_name << std::endl;
	std::cout << "Nickname : " << contacts[search - 1].nickname << std::endl;
	std::cout << "Phone number : " << contacts[search - 1].phone_number << std::endl;
	std::cin.ignore(10000, '\n');
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:34:41 by user42            #+#    #+#             */
/*   Updated: 2022/04/18 14:47:09 by adaloui          ###   ########.fr       */
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

void PhoneBook::delete_and_add_ctc(void)
{
	std::cout << "Je suis dans add_delete." << std::endl;
}

/*Contact PhoneBook::add_contacts(void)
{
	int index;

	index = 0;
	if (this->contact_nb == 8)
		this->delete_and_add_ctc();
	else
	{
		this->contacts[this->contact_nb].write_informations();
    	this->contact_nb++;
	} 
	while (index < 4)
	{
		std::cout << this->contacts->first_name[index] << std::endl;
		index++;
	}

}*/

void PhoneBook::find_contacts(Contact *contacts, int index)
{
	int search;

	search = 0;
	std::cin >> search; // RAJOUTER UN IF POUR < 0 ET > 8
	if (search < 1 || search >= index + 1)
	{
		std::cout << "\033[1;31mError. Adaloui's phonebook™ only contains\033[1;33m " << index << "\033[1;31m contacts.\033[0m" << std::endl;
		std::cout << "\033[1;37mPlease type a number ranging between \033[1;32m1 and 8.\033[0m" << std::endl;
		std::cin.ignore(10000, '\n');
	}	
	else
	{
		std::cout << contacts[search - 1].first_name << std::endl;
		std::cout << contacts[search - 1].last_name << std::endl;
		std::cout << contacts[search - 1].nickname << std::endl;
		std::cout << contacts[search - 1].phone_number << std::endl;
	}
	std::cin.ignore(10000, '\n');
}
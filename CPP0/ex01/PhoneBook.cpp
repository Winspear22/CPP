/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:34:41 by user42            #+#    #+#             */
/*   Updated: 2022/04/16 19:23:40 by adaloui          ###   ########.fr       */
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

void PhoneBook::add_contacts(void)
{
	int index;

	index = 0;
	if (this->contact_nb == 8)
		this->delete_and_add_ctc();
	else
	{
		this->contacts[this->contact_nb].write_informations(this->contact_nb);
    	this->contact_nb++;
	}
	while (index < 4)
	{
		std::cout << this->contacts->donnees[index] << std::endl;
		index++;
	}

}

void PhoneBook::find_contacts(void)
{
	int index;

	index = 0;
    if (this->contact_nb == 0)
        std::cout << "You don't have any contact. Add a contact before searching for one." << std::endl;
    else
    {
		while (index < 4)
		{
			std::cout << this->contacts[this->contact_nb].donnees[index] << std::endl;
			index++;
		}
        std::cout << "You have " << this->contact_nb << " contacts." << std::endl;
    }
}
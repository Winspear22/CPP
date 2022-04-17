/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:34:41 by user42            #+#    #+#             */
/*   Updated: 2022/04/17 19:00:42 by user42           ###   ########.fr       */
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
			std::cout << this->contacts[this->contact_nb].first_name[index] << std::endl;
			index++;
		}
        std::cout << "You have " << this->contact_nb << " contacts." << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:34:06 by user42            #+#    #+#             */
/*   Updated: 2022/04/16 19:06:44 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::donnees_nom[4] =
{
	"First name",
	"Last name",
	"Nickname",
	"Phone number"
};

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void Contact::write_informations(int contact_nb)
{
	(void)contact_nb;
	std::cout << "Please enter : " << donnees_nom[0] << std::endl;
	std::cin >> this->donnees[0];
	std::cout << "Please enter : " << donnees_nom[1] << std::endl;
	std::cin >> this->donnees[1];
	std::cout << "Please enter : " << donnees_nom[2] << std::endl;
	std::cin >> this->donnees[2];
	std::cout << "Please enter : " << donnees_nom[3] << std::endl;
	std::cin >> this->donnees[3];
}
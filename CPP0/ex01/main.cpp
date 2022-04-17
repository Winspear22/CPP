/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:26:59 by user42            #+#    #+#             */
/*   Updated: 2022/04/17 19:56:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string buff;
	Contact contacts[8];
	PhoneBook instance;
	int index;
	int search;

	index = 0;
	search = 0;
	instance.contact_nb = 0;
	std::cout << "\033[1;32mHello and welcome to adaloui's phonebook™.\033[0m" << std::endl;
	std::cout << "What can we do for you ? ";
	while (1)
	{
		getline(std::cin, buff);
		if (buff == "ADD")
		{
			if (index < 8)
			{
				contacts[index] = contacts->write_informations();
				index++;
			}
			else 
			{
				index = 0;
				contacts[index] = contacts->write_informations();
			}
		}
		else if (buff == "SEARCH")
		{
			
			std::cin >> search; // RAJOUTER UN IF POUR < 0 ET > 8
			std::cout << contacts[search].first_name << std::endl;
			std::cout << contacts[search].last_name << std::endl;
			std::cout << contacts[search].nickname << std::endl;
			std::cout << contacts[search].phone_number << std::endl;
		}
		else if (buff == "EXIT")
		{
			std::cout << "\033[1;33mSee you later in adaloui's phonebook™!\033[0m" << std::endl;
			return (0);
		}
		else
			std::cout << "\033[1;31mInvalid command.\033[0m" << std::endl;
		std::cout << "What next ? ";
	}
	return (0);
}
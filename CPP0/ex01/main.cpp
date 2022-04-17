/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:26:59 by user42            #+#    #+#             */
/*   Updated: 2022/04/17 15:52:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string buff;

	PhoneBook instance;
	instance.contact_nb = 0;
	std::cout << "\033[1;32mHello and welcome to adaloui's phonebook™.\033[0m" << std::endl;
	std::cout << "What can we do for you ? ";
	while (1)
	{
		getline(std::cin, buff);
		if (buff == "ADD")
			instance.add_contacts();
		else if (buff == "SEARCH")
			instance.find_contacts();
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
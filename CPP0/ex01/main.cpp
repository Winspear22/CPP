/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:26:59 by user42            #+#    #+#             */
/*   Updated: 2022/04/14 18:37:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string buff;
	
	PhoneBook instance;
	while (1)
	{
		std::cout << "Ecrivez votre numéro ";
		std::cin >> buff;
		if (buff == "ADD")
			instance.add_contacts();
		else if (buff == "SEARCH")
		//	instance.find_contacts();
			return (0);
		else if (buff == "EXIT")
			return (0);
		else
			std::cout << "Invalid command." << std::endl;	
	}
	return (0);
}
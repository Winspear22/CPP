/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:13:30 by user42            #+#    #+#             */
/*   Updated: 2022/04/20 19:38:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie Adnen("Adnen");
	Adnen.write_name();
	Adnen.announce();

    Zombie *Adam;
	Adam = NULL;
	Adam = newZombie("Adam");
	Adam->write_name();
	Adam->announce();

	randomChump("Zakaria");
	delete Adam;
    return (0);
}
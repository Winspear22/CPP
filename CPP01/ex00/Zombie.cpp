/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:27:27 by user42            #+#    #+#             */
/*   Updated: 2022/04/20 19:30:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name)
{
	//(void)name;
    return;
}

Zombie::~Zombie(void)
{
	write_name();
    std::cout << "*Dies*" << std::endl;
    return;
}

void Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::write_name(void)
{
	std::cout << this->name << ": ";
}
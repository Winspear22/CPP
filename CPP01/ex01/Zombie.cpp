/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:51:27 by user42            #+#    #+#             */
/*   Updated: 2022/04/20 20:55:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie(void)
{
    return;
}

std::string	Zombie::get_name(void) const
{
	return (this->_name);
}

bool	Zombie::set_name(std::string name)
{
	this->_name = name;
	return (true);
}

void Zombie::announce(void)
{
	std::cout << "BraiiiiiinnnzzzZ..." << std::endl;
}
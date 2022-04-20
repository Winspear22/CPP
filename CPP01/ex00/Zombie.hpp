/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:07:49 by user42            #+#    #+#             */
/*   Updated: 2022/04/20 19:36:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
public:
	void	announce( void );
	
	Zombie(std::string name);
	~Zombie(void);

	void	write_name(void);
private:
	std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
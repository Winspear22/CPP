/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:58:00 by user42            #+#    #+#             */
/*   Updated: 2022/04/20 20:55:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iomanip>
#include <iostream>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);

	void	announce( void );
	std::string	get_name(void) const;
	bool	set_name(std::string name);
private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string Name);

#endif
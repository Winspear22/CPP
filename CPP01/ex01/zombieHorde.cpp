/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:58:29 by user42            #+#    #+#             */
/*   Updated: 2022/04/20 20:41:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string Name)
{
    int i;
    Zombie* zombie_horde;

    i = 0;
    zombie_horde = new Zombie[N];
    while (i < N)
    {
        zombie_horde[i].set_name(Name);
        i++;
    }
    return (zombie_horde);
}

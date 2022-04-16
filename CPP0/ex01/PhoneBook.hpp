/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:13:39 by user42            #+#    #+#             */
/*   Updated: 2022/04/14 18:02:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string.h>
#include "Contact.hpp"

class PhoneBook
{ 
public:
    
    PhoneBook(void);
    ~PhoneBook(void);
    
    void add_contacts(void);
    void find_contacts(void);
};

#endif
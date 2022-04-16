/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:13:39 by user42            #+#    #+#             */
/*   Updated: 2022/04/16 18:49:18 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string.h>

class Contact
{
public:

    int index;
	static std::string donnees_nom[4];
	std::string donnees[4];
		
    Contact(void);
    ~Contact(void);

	void write_informations(int contact);

private:
    std::string darkest_secret;
};

class PhoneBook
{
public:
    int contact_nb;
	Contact contacts[8];

    PhoneBook(void);
    ~PhoneBook(void);
    
    void add_contacts(void);
	void delete_and_add_ctc(void);
    void find_contacts(void);
};

#endif
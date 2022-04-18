/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:13:39 by user42            #+#    #+#             */
/*   Updated: 2022/04/18 15:57:23 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <string.h>

class Contact
{
public:

    int index;
	static std::string donnees_nom[5];
	std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;

    std::string get_firstname(std::string str);
    std::string get_lastname(std::string tmp);
    std::string get_nickname(std::string tmp);
    std::string get_phonenumber(std::string tmp);
	std::string get_darkest_secret(std::string tmp);

    Contact(void);
    ~Contact(void);

	Contact write_informations(void);

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
    
   // Contact add_contacts(void);
	void delete_and_add_ctc(void);
    void find_contacts(Contact *contacts, int index);
};

#endif
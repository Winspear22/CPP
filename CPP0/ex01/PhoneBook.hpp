/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:13:39 by user42            #+#    #+#             */
/*   Updated: 2022/04/19 14:51:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <csignal>
#include <string.h>

class Contact
{
public:

    int index;
	static std::string donnees_nom[5];

	std::string get_firstname(void) const;
	std::string get_lastname(void) const;
	std::string get_nickname(void) const;
	std::string get_phonenumber(void) const;
	std::string get_darkest_secret(void) const;
	
    bool set_firstname(std::string str);
    bool set_lastname(std::string tmp);
    bool set_nickname(std::string tmp);
    bool set_phonenumber(std::string tmp);
	bool set_darkest_secret(std::string tmp);

    Contact(void);
    ~Contact(void);

	Contact write_informations(void);

private:
	std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
};

class PhoneBook
{
public:
    int contact_nb;
	Contact contacts[8];

    PhoneBook(void);
    ~PhoneBook(void);
    
    void find_contacts(Contact *contacts, int index);
    std::string limit_info(std::string str);
};

#endif
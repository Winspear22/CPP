/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:13:31 by user42            #+#    #+#             */
/*   Updated: 2022/04/19 03:00:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
public:

    int index;

    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;

    Contact(void);
    ~Contact(void);

private:
    std::string darkest_secret;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.setters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:38:31 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/06 09:49:49 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int Contact::_setFirstName(const std::string &first_name)
{    
    if (is_only_ws(first_name) || first_name.empty())
    {
        std::cout << "Empty entry, please enter first name"  << std::endl;
        return (1);   
    }
    this->_first_name = first_name;
    return (0);
}

int Contact::_setLastName(const std::string &last_name)
{
    if (is_only_ws(last_name) || last_name.empty())
    {
        std::cout << "Empty entry, please enter last name"  << std::endl;
        return (1);   
    }
    this->_last_name = last_name;
    return (0);
}

int Contact::_setNickName(const std::string &nick_name)
{
    if (is_only_ws(nick_name) || nick_name.empty())
    {
        std::cout << "Empty entry, please enter nick name"  << std::endl;
        return (1);   
    }
    this->_nick_name = nick_name;
    return (0);
}
int Contact::_setPhoneNumber(const std::string &phone_number)
{
    if (!is_only_digit(phone_number))
    {
        std::cout << "phone number must be only digits" << std::endl;
        return (1);
    }
    if (is_only_ws(phone_number) || phone_number.empty())
    {
        std::cout << "Empty entry, please enter phone number"  << std::endl;
        return (1);   
    }
    this->_phone_number = phone_number;
    return (0);
}
int Contact::_setDarkestSecret(const std::string &darkest_secret)
{
    if (is_only_ws(darkest_secret) || darkest_secret.empty())
    {
        std::cout << "Empty entry, please enter darkest secret"  << std::endl;
        return (1);   
    }
    this->_darkest_secret = darkest_secret;
    return (0);
}

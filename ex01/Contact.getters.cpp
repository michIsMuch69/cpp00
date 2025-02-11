/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.getters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:38:34 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/06 10:11:53 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

std::string Contact::_getFirstName()const
{
   return (this->_first_name);
}

std::string Contact::_getLastName()const
{
    return (this->_last_name);
}
std::string Contact::_getNickName()const
{
    return (this->_nick_name);
}
std::string Contact::_getPhoneNumber()const
{
    return (this->_phone_number);
}
std::string Contact::_getDarkestSecret()const
{
    return (this->_darkest_secret);
}
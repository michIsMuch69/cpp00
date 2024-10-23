/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:15:50 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/23 09:20:41 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <string>

std::string Contact::_getFirstName()
{
	return (this->first_name);
}

std::string Contact::_getLastName()
{
	return (this->last_name);
}

std::string Contact::_getNickname()
{
	return (this->nickname);
}
std::string Contact::_getPhoneNumber()
{
	return (this->phone_number);
}
std::string Contact::_getDarkestSecret()
{
	return (this->darkest_secret);
}


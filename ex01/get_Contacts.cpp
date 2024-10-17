/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_Contacts.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:15:50 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/17 08:01:45 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "includes.hpp"
#include <iostream>
#include <string>

std::string Contact::getFirstName()
{
	return (this->first_name);
}

std::string Contact::getLastName()
{
	return (this->last_name);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}
std::string Contact::getPhoneNumber()
{
	return (this->phone_number);
}
std::string Contact::getDarkestSecret()
{
	return (this->darkest_secret);
}


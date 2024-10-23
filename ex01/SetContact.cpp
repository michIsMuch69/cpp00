/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SetContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:22:42 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/23 09:20:09 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

void Contact::_setFirstName(const std::string &first_name)
{
   this->first_name = first_name;
}


void Contact::_setLastName(const std::string &last_name)
{
    this->last_name = last_name;
}

void Contact::_setNickName(const std::string &nickname)
{
   this->nickname = nickname;
}

void Contact::_setPhoneNumber(const std::string &phone_number)
{
    this->phone_number = phone_number;
}

void Contact::_setDarkestSecret(const std::string &darkest_secret)
{
    this->darkest_secret = darkest_secret;
}
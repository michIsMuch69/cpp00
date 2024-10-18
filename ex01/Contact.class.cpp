/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:31:32 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/18 13:43:11 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "includes.hpp"
#include <iostream>
#include <string>

Contact::Contact() :
    first_name(""),
    last_name(""),
    nickname(""),
    phone_number(""),
    darkest_secret("")
{
    //std::cout << "default contact constructor called" << std::endl;
}

Contact::Contact(const std::string &first_name, const std::string &last_name,
                 const std::string &nickname, const std::string &phone_number,
                 const std::string &darkest_secret)
    : first_name(first_name), last_name(last_name),
      nickname(nickname), phone_number(phone_number),
      darkest_secret(darkest_secret)
{
   // std::cout << "constructor with init list called" << std::endl;
}

Contact::~Contact(void)
{
   // std::cout << "common contact destructor called" << std::endl;
}
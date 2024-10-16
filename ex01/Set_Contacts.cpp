/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_Contacts.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:22:42 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/16 14:03:29 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

void setFirstName(std::string &first_name)
{
    std::cout << "Enter First Name : ";
    std::cin >> first_name;
   // return (First_Name);
}


void setLastName(std::string &last_name)
{
    std::cout << "Enter Last Name : ";
    std::cin >> last_name;
 //   return (Last_Name);
}

void setNickName(std::string &nickname)
{
    std::cout << "Enter Nickname : ";
    std::cin >> nickname;
   // return (NickName);
}

void setPhoneNumber(std::string &phone_number)
{
    std::cout << "Enter Phone Number : ";
    std::cin >> phone_number;
   // return (PhoneNumber);
}

void setDarkestSecret(std::string &darkest_secret)
{
    std::cout << "Enter Darkest Secret : ";
    std::cin >> darkest_secret;
   // return (DarkestSecret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_Contacts.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:22:42 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/16 13:46:46 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

std::string setFirstName()
{
    std::string First_Name;
    std::cout << "Enter First Name : ";
    std::cin >> First_Name;
    return (First_Name);
}


std::string setLastName()
{
    std::string Last_Name;
    std::cout << "Enter Last Name : ";
    std::cin >> Last_Name;
    return (Last_Name);
}

std::string setNickName()
{
    std::string NickName;
    std::cout << "Enter Nickname : ";
    std::cin >> NickName;
    return (NickName);
}

std::string setPhoneNumber()
{
    std::string PhoneNumber;
    std::cout << "Enter Phone Number : ";
    std::cin >> PhoneNumber;
    return (PhoneNumber);
}

std::string setDarkestSecret()
{
    std::string DarkestSecret;
    std::cout << "Enter Darkest Secret : ";
    std::cin >> DarkestSecret;
    return (DarkestSecret);
}
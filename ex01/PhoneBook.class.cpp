/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:34:09 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/18 15:52:38 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

PhoneBook::PhoneBook()
{
    std::cout << "PB Constructor called" << std::endl;
    contactCount = 0;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PB Destructor Called" << std::endl;
    return;

}

void parse_info(std::string &string)
{
    if (string.length() > 10)
    {
        string.erase(9);
        string.push_back('.');
    }
    string.insert(0, 10 - string.length(), ' ');
}
void parse_contacts(std::string &string1, std::string &string2, std::string &string3, std::string &string4)
{
    parse_info(string1);
    parse_info(string2);
    parse_info(string3);
    parse_info(string4);
}
void PhoneBook::addContact()
{
    if (contactCount == 8)
        contactCount = 0;
    std::string first_name, last_name, nickname, phone_number, darkest_secret;
   
    std::cin.ignore();

    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);
    std::cin.clear();
    
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    std::cin.clear();
    
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    std::cin.clear();

    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    std::cin.clear();

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);
    std::cin.clear();


   // std::cin.ignore();

    
    contacts[contactCount] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
        contactCount++;
    std::cout << "Contact added successfully!" << std::endl;
}

std::string int_to_str(int nb)
{
    std::stringstream string;
    string << nb;
    return (string.str());
}


void PhoneBook::displayPhonebook()
{
    int i;

    i = 0;
    std::string separator;
    std::cout << "==================Available contacts===================" << std::endl;
    separator.replace(0, 40, 55, '_');
    std::cout << "   [Index]   " << " [First Name]  " << "[Last Name]   " << "[Nickname]" << std::endl;
    std::cout << separator << std::endl;
    while (i < 8) // < contactCount
    {
        std::string index = int_to_str(i + 1);
        std::string first_name = contacts[i].getFirstName();
        std::string last_name = contacts[i].getLastName();
        std::string nick_name = contacts[i].getNickname();
        if (first_name == "")
            break;
        parse_contacts(index, first_name, last_name, nick_name);
        std::cout << "  " << index << " | " ;
        std::cout << first_name << " | ";
        std::cout << " " << last_name << " | ";
        std::cout << " " << nick_name << std::endl;
        i++;
    }
    std::cout << separator << std::endl;

}
void PhoneBook::searchContact()
{
    int index;
    
    if (contactCount == 0)
    {
        std::cout << "Phone book is empty!" << std::endl;
        return;
    }
    displayPhonebook();
    std::cout << std::endl;
    std::cout << "Enter contact index to view details: ";
    std::cout << std::endl;
    std::cin >> index;
    std::cout << std::endl;
    if (index > 0 && index <= 8)
        displayContact(index - 1);
    else
        std::cout << "Invalid index!" << std::endl;
}

void PhoneBook::displayContact(int index)
{
    std::cout << "  Index : " << index + 1;
    std::cout << std::endl;
    std::cout << "  First Name : " << contacts[index].getFirstName();
    std::cout << std::endl;
    std::cout << "  Last Name : " << contacts[index].getLastName();
    std::cout << std::endl;
    std::cout << "  Nickname : " << contacts[index].getNickname();
    std::cout << std::endl;
    std::cout << "  Phone Number : " << contacts[index].getPhoneNumber();
    std::cout << std::endl;
    std::cout << "  Darkest Secret : " << contacts[index].getDarkestSecret() << std::endl;
    std::cout << std::endl;
}

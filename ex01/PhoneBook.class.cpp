/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:34:09 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/18 11:37:16 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <sstream>

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

void PhoneBook::addContact()
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    std::cout << "Enter first name: ";
    std::cin >> first_name;
    std::cout << "Enter last name: ";
    std::cin >> last_name;
    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    std::cout << "Enter darkest secret: ";
    std::cin >> darkest_secret;
    contacts[contactCount] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
    contactCount++;
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::parse_contact(std::string &string)
{
    if (string.length() > 10)
    {
        string.erase(9);
        string.push_back('.');
    }
    string.insert(0, 10 - string.length(), ' ');
}

std::string int_to_str(int nb)
{
    std::stringstream string;
    string << nb;
    return (string.str());
}
void PhoneBook::searchContact()
{
    int i;
    int index;
    
    if (contactCount == 0)
    {
        std::cout << "Phone book is empty!" << std::endl;
        return;
    }
    std::cout << "Available contacts:" << std::endl;
    i = 0;
    while (i < contactCount)
    {
        std::string index = int_to_str(i);
        std::string first_name = contacts[i].getFirstName();
        std::string last_name = contacts[i].getLastName();
        std::string nick_name = contacts[i].getNickname();
        parse_contact(index);
        parse_contact(first_name);
        parse_contact(last_name);
        parse_contact(nick_name);
        std::cout << "  " << index << " | "  << first_name << " | " << " " << last_name << " | " << " " << nick_name<< std::endl;
        i++;
    }
    std::cout << std::endl;
    std::cout << "Enter contact index to view details: ";
    std::cout << std::endl;

    std::cin >> index;
    std::cout << "INDEX ENTERED --> " << index;
    std::cout<< std::endl;
    if (index > 0 && index < contactCount)
        displayContact(index );
    else
        std::cout << "Invalid index!" << std::endl;
}

void PhoneBook::displayContact(int index)
{
    std::cout << "  Index : " << index;
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

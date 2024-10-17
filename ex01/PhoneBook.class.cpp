/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:34:09 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/17 13:35:20 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

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
    if (contactCount == 8)
        contactCount = 0; 

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
    while (i <= contactCount)
    {
        std::string first_name = contacts[i].getFirstName();
        std::string last_name = contacts[i].getLastName();
        std::string nick_name = contacts[i].getNickname();
        
        std::cout << i + 1 << " | "  << first_name << " | " << " " << last_name << std::endl;
        i++;
    }
    std::cout << "Enter contact index to view details: ";
    std::cin >> index;
    std::cout<< std::endl;
    std::cout<< index;
    if (index > 0 && index <= contactCount)
        displayContact(index - 1);
    else
        std::cout << "Invalid index!" << std::endl;
}

void PhoneBook::displayContact(int index)
{
    std::cout << index;
    std::cout << " | ";
    std::cout << "First Name: " << contacts[index].getFirstName();
    std::cout << " | ";
    std::cout << "Last Name: " << contacts[index].getLastName();
    std::cout << " | ";
    std::cout << "Nickname: " << contacts[index].getNickname();
    std::cout << " | ";
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber();
    std::cout << " | ";
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

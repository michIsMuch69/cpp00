/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 03:58:37 by michismuch        #+#    #+#             */
/*   Updated: 2025/02/13 11:29:13 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

#include "PhoneBook.class.hpp"


PhoneBook::PhoneBook()
{
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void PhoneBook::getValidInput(const std::string &field_name,
	int (Contact::*setterFunction)(const std::string &),
	Contact &contact)
{
	std::string user_input;
	std::cout << COLOR_CYAN << field_name << " : " << COLOR_RESET;
	while (std::getline(std::cin, user_input))
	{
		if (std::cin.eof())
			break;
		if ((contact.*setterFunction)(user_input) == 0)
			break;
		std::cout << COLOR_CYAN << field_name << " : " << COLOR_RESET;
	}
}

void PhoneBook::addContact(int &index)
{
    if (index >= MAX_CONTACTS)
                index = 0; 
    std::cout << "\n" << COLOR_GREEN << "Adding new contact at index " 
              << index + 1 << COLOR_RESET << std::endl;
    getValidInput("First name", &Contact::_setFirstName, _contacts[index]);
    getValidInput("Last name", &Contact::_setLastName, _contacts[index]);
    getValidInput("Nick name", &Contact::_setNickName, _contacts[index]);
    getValidInput("Phone number", &Contact::_setPhoneNumber, _contacts[index]);
    getValidInput("Darkest secret", &Contact::_setDarkestSecret, _contacts[index]);
    std::cout << COLOR_GREEN << "Contact added." << COLOR_RESET << std::endl;
}


void PhoneBook::displayPhonebookSummary()
{
    std::string separator(48, '_');

    std::cout << "\n" << COLOR_MAGENTA 
              << "=================== MY AWESOME PHONEBOOK ==================" 
              << COLOR_RESET << std::endl;
    std::cout << COLOR_YELLOW 
              << std::setw(15) << std::left << "[Index][First name]"
              << std::setw(15) << std::right << "[Last Name]" 
              << std::setw(15) << "[Nickname]" 
              << COLOR_RESET << std::endl;
    for (int i = 0; i < MAX_CONTACTS; i++)
    {
        if (!_contacts[i]._getFirstName().empty())
            _contacts[i].displayContactSummary(i);
    }
}

void PhoneBook::searchContacts()
{
    std::string input;
	
    while (true)
    {
        std::cout << "\n" << COLOR_CYAN 
                  << "Enter index (0 to go back to commands): " 
                  << COLOR_RESET;
        if (!std::getline(std::cin, input) || std::cin.eof())
            break;
        input.erase(input.find_last_not_of(" \t\n\r") + 1);
        if (input.length() != 1 || input.empty() || !std::isdigit(input[0]))
        {
            std::cout << COLOR_RED 
                      << "Invalid input. Please enter a number between 1 and 8." 
                      << COLOR_RESET << std::endl;
            continue;
        }
        int idx = input[0] - '0';
        if (idx == 0)
            break;
        if (idx < 1 || idx > MAX_CONTACTS)
        {
            std::cout << COLOR_RED 
                      << "Index out of range. Please enter a valid index between 1 and 8" 
                      << MAX_CONTACTS << "." 
                      << COLOR_RESET << std::endl;
            continue;
        }
        if (_contacts[idx - 1]._getFirstName().empty())
        {
            std::cout << COLOR_RED 
                      << "No contact exists at index " << idx << "." 
                      << COLOR_RESET << std::endl;
            continue;
        }
        _contacts[idx - 1].displayContact(idx - 1);
        std::cout << std::endl;
        displayPhonebookSummary();
    }
}


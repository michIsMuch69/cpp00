/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:14:56 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/10 09:49:25 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

void give_instructions()
{
	std::cout << "Phone Book Usage :" << std::endl << std::endl;
    std::cout << "--> Enter \"ADD\" to add a new contact." << std::endl;
    std::cout << "--> Enter \"SEARCH\" then the desired index to access the corresponding contact." << std::endl;
    std::cout << "--> Enter \"EXIT\" to exit the program." << std::endl << std::endl;
}
void PhoneBook::launch()
{
    int index = 0;
    std::string command;
    
	give_instructions();
    while (true)
    {
        std::cout << "\nEnter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin >> std::ws, command))
            break;
        command.erase(command.find_last_not_of(" \t\n\r") + 1);
        if (command.empty())
            continue;
        if (command == "ADD")
        {
            addContact(index);
            index++;
        }
        else if (command == "SEARCH")
        {
            if (index > 0)
            {
                displayPhonebookSummary();
                searchContacts();
            }
            else
                std::cout << "Phonebook is empty, nothing to display." << std::endl;
        }
        else if (command == "EXIT")
            return;
        else
            std::cout << command << ": is not a valid command." << std::endl;
    }
    std::cin.ignore();
}

int	main()
{
    PhoneBook phonebook;
	phonebook.launch();
    return 0;
}
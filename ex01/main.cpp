	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:53:58 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/15 14:54:17 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook phoneBook;
    std::string command;
    
    std::cout << "Phone Book Usage :" << std::endl << std::endl;
    std::cout << "--> Enter \"ADD\" to add a new contact." << std::endl;
    std::cout << "--> Enter \"SEARCH\" then the desired index to access the corresponding contact." << std::endl;
    std::cout << "--> Enter \"EXIT\" to exit the program." << std::endl << std::endl;

    while (true  && !std::cin.eof())
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cout << std::endl;
        std::cin >> command;
        std::cout << std::endl;
        std::cout << std::endl;

        if (command == "ADD")
            phoneBook._addContact();
        else if (command == "SEARCH")
            phoneBook._searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}
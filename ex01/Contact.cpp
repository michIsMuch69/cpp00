/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 03:56:56 by michismuch        #+#    #+#             */
/*   Updated: 2025/02/13 11:28:24 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

Contact::Contact()
{
    // return ;
}

Contact::~Contact()
{ 
    // return ;
}

void Contact::displayContactSummary(int index)
{
        std::string field;
        
        // if (contact._getFirstName().empty())
        // {
        //     std::cout << "empty" << std::endl;
        //     return ;
        // }
        std::cout << COLOR_BLUE; 
        std::cout << "[" << index + 1 << "]";
        
        displayContactField("first Name", &Contact::_getFirstName, TRUNC_ON);
        displayContactField("Last Name", &Contact::_getLastName, TRUNC_ON);
        displayContactField("Nick Name", &Contact::_getNickName, TRUNC_ON);
        separate_line();  
        std::cout << COLOR_RESET;
}

void Contact::displayContactField(const std::string &field_name, 
        std::string(Contact::*getterFunction)() const, bool truncate)
{
    std::string field_content;
    
   
    field_content = (this->*getterFunction)();
    if (truncate)
    {
        parse_info(field_content);
        std::cout << std::setw(15) << std::right << field_content << "|" ;
    }
    else
        std::cout  << COLOR_YELLOW << field_name << " : "<< COLOR_RESET << field_content << std::endl;
}

void Contact::displayContact(int index)
{
    std::cout << "\n" << COLOR_MAGENTA << "Contact nb [" 
              << index + 1 << "]:" << COLOR_RESET << std::endl;
    
    displayContactField("First name", &Contact::_getFirstName, TRUNC_OFF);
    displayContactField("Last name ", &Contact::_getLastName, TRUNC_OFF);
    displayContactField("Nick name", &Contact::_getNickName, TRUNC_OFF);
    displayContactField("Phone number", &Contact::_getPhoneNumber, TRUNC_OFF);
    displayContactField("Darkest secret", &Contact::_getDarkestSecret, TRUNC_OFF);
}
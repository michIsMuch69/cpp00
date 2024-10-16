/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:31:32 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/16 13:46:48 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "includes.hpp"
#include <iostream>
#include <string>

Contact::Contact(std::string p_first_name,
    std::string p_last_name,
    std::string p_nickname,
    std::string p_phone_number,
    std::string p_darkest_secret1) : first_name(p_first_name), last_name(p_last_name),
    nickname(p_nickname), phone_number(p_phone_number),
    darkest_secret(p_darkest_secret1)
{
    std::cout << "Contact Constructor called" << std::endl;
    std::cout << "this->first_name = "  << this->first_name << std::endl;
    std::cout << "this->last_name = " << this->last_name << std::endl;
    std::cout << "this->nickname = " << this->nickname << std::endl;
    std::cout << "this->phone_number = " << this->phone_number << std::endl;
    std::cout << "this->darkest_secret = " << this->darkest_secret << std::endl;
}
        
Contact::~Contact(void)
{
    std::cout << "Contact Destructor Called" << std::endl;
    return;
}



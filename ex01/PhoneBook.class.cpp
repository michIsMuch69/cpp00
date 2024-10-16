/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:34:09 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/16 13:21:31 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(Contact p_contact) : contact(p_contact)
{
    std::cout << "PB Constructor called" << std::endl;
  //  std::cout << "pb this -> first_name = " << this->contact.first_name;
    //std::cout << "pb this-> first_name =  "<< this->contact.first_name << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PB Destructor Called" << std::endl;
    return;

}
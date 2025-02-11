/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:08:51 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/10 11:15:13 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "includes.hpp"
#include "Contact.class.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
  private:
    Contact _contacts[MAX_CONTACTS];
    
  public:
    /***********Constructors ***********/
    
    PhoneBook();
    ~PhoneBook();

  	/***********Methods****************/

    void launch();
    void getValidInput(const std::string &field_name, 
                        int (Contact::*setterFunction)(const std::string &),
                        Contact &contact);
    void addContact(int &index);                        
    void displayPhonebookSummary();
    void searchContacts();
};

#endif

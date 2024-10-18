/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:29:35 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/18 09:47:02 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {

	public:
		void addContact();
		void searchContact();
		void displayContact(int index);
		void parse_contact(std::string &string);
		PhoneBook();
		~PhoneBook(void);
		
	private:
		Contact contacts[8];
		int contactCount;

	
};

#endif	
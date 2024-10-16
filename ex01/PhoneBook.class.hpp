/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:29:35 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/16 12:08:56 by jedusser         ###   ########.fr       */
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
		PhoneBook(Contact contact);
		~PhoneBook(void);
		
	private:
		Contact contact;
	
};

#endif	
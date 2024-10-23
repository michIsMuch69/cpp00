/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:29:35 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/23 09:15:02 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {

	public:
		void _addContact();
		void _searchContact();
		void _displayContact(int index);
		void _displayPhonebook();
		PhoneBook();
		~PhoneBook(void);
		
	private:
		Contact contacts[8];
		int contactCount;
		int oldestIndex;
};

#endif	
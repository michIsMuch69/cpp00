/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:32:49 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/18 13:43:05 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
class Contact {
	
	public:
		// setters
		void setFirstName(const std::string &first_name);
		void setLastName(const std::string &last_name);
		void setNickName(const std::string &nickname);
		void setPhoneNumber(const std::string &phone_number);
		void setDarkestSecret(const std::string &darkest_secret);

		// getters
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

		//default constructor
		Contact();
		// constructor with init list
		Contact(const std::string &first_name, const std::string &last_name,
		const std::string &nickname, const std::string &phone_number,
		const std::string &darkest_secret);
		~Contact(void);

	private:
		// attributes
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif	
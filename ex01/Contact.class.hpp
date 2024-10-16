/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:32:49 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/16 13:46:51 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
class Contact {

	public:
		//methods
		
		std::string setFirstName(void);
		std::string setLastName(void);
		std::string setNickName(void);
		std::string setPhoneNumber(void);
		std::string setDarkestSecret(void);
		
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		//init list
		
		Contact(std::string first_name,
		std::string last_name,
		std::string nickname,
		std::string phone_number,
		std::string darkest_secret);
		~Contact(void);
	
	private:
		//attributes
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		
};

#endif	
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:32:49 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/15 16:03:00 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
class Contact {

	public:

		void setFirstName(std::string FirstName);
		void setLastName(std::string LastName);
		void setNickName(std::string Nickname);
		void setPhoneNumber(std::string PhoneNumber);
		void setDarkestSecret(std::string DarkestSecret);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
	
	private:
			
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		
};

#endif	
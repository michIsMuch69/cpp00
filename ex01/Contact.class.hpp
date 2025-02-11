/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:10:19 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/10 12:53:46 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "includes.hpp"

class	Contact 
{
	private :
	
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
		
	public : 
	
	/***********Constructors ***********/
		
		Contact();  
		Contact(const std::string &first_name,const std::string &last_name,
		const std::string &nick_name, const std::string &phone_number, 
		const std::string &darkest_secret);
		~Contact(void);

	/***********Methods****************/

		std::string _getFirstName() const;
		std::string _getLastName() const;
		std::string _getNickName() const;
		std::string _getPhoneNumber() const;
		std::string _getDarkestSecret() const;
		int        _setFirstName(const std::string &first_name);
		int        _setLastName(const std::string &last_name);
		int        _setNickName(const std::string &nick_name);
		int        _setPhoneNumber(const std::string &phone_number);
		int        _setDarkestSecret(const std::string &darkest_secret);
		void displayContactSummary(Contact &contact, int index);
		void displayContact(int index);
		void displayContactField(const std::string &field_name, 
		std::string(Contact::*getterFunction)() const, bool truncate);


};

#endif
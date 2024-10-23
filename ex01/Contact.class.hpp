/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:32:49 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/23 09:20:30 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include "PhoneBook.class.hpp"
#include <string>
class Contact {
	
	public:
		void _setFirstName(const std::string &first_name);
		void _setLastName(const std::string &last_name);
		void _setNickName(const std::string &nickname);
		void _setPhoneNumber(const std::string &phone_number);
		void _setDarkestSecret(const std::string &darkest_secret);

		std::string _getFirstName();
		std::string _getLastName();
		std::string _getNickname();
		std::string _getPhoneNumber();
		std::string _getDarkestSecret();

		Contact();
		Contact(const std::string &first_name, const std::string &last_name,
		const std::string &nickname, const std::string &phone_number,
		const std::string &darkest_secret);
		~Contact(void);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif	
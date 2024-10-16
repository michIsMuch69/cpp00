	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:53:58 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/15 14:54:17 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "includes.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	setFirstName(first_name);
	setLastName(last_name);
	setNickName(nickname);
	setPhoneNumber(phone_number);
	setDarkestSecret(darkest_secret);
    Contact instance1(first_name, last_name, nickname, phone_number, darkest_secret);
	//PhoneBook phoneBook(instance1);
	
}
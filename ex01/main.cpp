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
    Contact instance1(setFirstName(), setLastName() , setNickName(), setPhoneNumber(), setDarkestSecret());
	PhoneBook phoneBook(instance1);
	
}
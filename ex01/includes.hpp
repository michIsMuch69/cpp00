/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:20:39 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/16 14:00:28 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  INCLUDES_H
#define INCLUDES_H


#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

// std::string setFirstName(void);
// std::string setLastName(void);
// std::string setNickName(void);
// std::string setPhoneNumber(void);
// std::string setDarkestSecret(void);
void setFirstName(std::string &first_name);
void setLastName(std::string &last_name);
void setNickName(std::string &nickname);
void setPhoneNumber(std::string &phone_number);
void setDarkestSecret(std::string &darkest_secret);

#endif 
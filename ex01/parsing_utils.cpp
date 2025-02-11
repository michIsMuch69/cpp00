/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 09:35:13 by jedusser          #+#    #+#             */
/*   Updated: 2025/02/10 13:10:45 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"


bool    is_only_ws(const std::string &string)
{
	for(unsigned long i = 0; i < string.length(); i++)
	{
		if (!std::isspace(string[i]))
			return (false);
	}
	return (true);
}

bool    is_only_digit(const std::string &string)
{
    for (unsigned long i = 0; i < string.length(); i++)
    {
        if (!std::isdigit(string[i]))
            return (false);
    }
    return (true);
}

void    parse_info(std::string &string)
{
    if (string.length() > 10)
    {
        string.erase(9);
        string.push_back('.');
    }
}

void separate_line()
{
        std::string separator(48, '_');
        std::cout << std::endl << COLOR_CYAN << separator << COLOR_RESET << std::endl;
}
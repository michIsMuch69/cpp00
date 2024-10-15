/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 08:57:23 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/15 14:18:42 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string to_uppercase(const std::string &str)
{
	size_t i;

	i = 0;

	std::string result;

	result = str;
	while (i < result.length())
	{
		result[i] = std::toupper(result[i]);
		i++;
	}
	return (result);	
}

int main(int argc, char **argv)
{
	
	int i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			std::cout << to_uppercase(argv[i]);
			if (i < argc - 1)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
}
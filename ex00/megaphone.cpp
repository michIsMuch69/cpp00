/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 08:57:23 by jedusser          #+#    #+#             */
/*   Updated: 2025/01/27 15:02:56 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(int argc, char **argv)
{
    std::string string;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
    for (size_t i = 1; argv[i] != NULL; i++)
        string = string + argv[i];
    for (size_t i = 0; i < string.length(); i++)
        std::cout << (char)std::toupper(string[i]);
    std::cout << std::endl;
    return (0);
}
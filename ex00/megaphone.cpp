/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:26:41 by omartela          #+#    #+#             */
/*   Updated: 2024/12/28 14:26:44 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    char    *input;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    input = argv[1];
    for (size_t i = 0; input[i] != '\0'; ++i)
    {
        input[i] = std::toupper(static_cast<unsigned char>(input[i]));
    }
    std::cout << input << std::endl;
    return (0);
}

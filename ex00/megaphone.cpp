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
        return (0);
    }
    for (int i = 1; i < argc; ++i)
    {
        input = argv[i];
        for (size_t j = 0; input[j] != '\0'; ++j)
        {
            input[j] = std::toupper(static_cast<unsigned char>(input[j]));
        }
        std::cout << input;
    }
    std::cout << std::endl;
    return (0);
}

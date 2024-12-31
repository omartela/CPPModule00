/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:11:11 by omartela          #+#    #+#             */
/*   Updated: 2024/12/29 20:11:14 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

int main()
{
    PhoneBook phonebook;
    std::string s_add ("ADD");
    std::string s_search ("SEARCH");
    std::string s_exit ("EXIT");
    std::string command;

    while (1)
    {
        std::cout << "Enter one of the three commands: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, command);
        if (command.compare(s_add) == 0)
            add(phonebook);
        else if (command.compare(s_search) == 0)
            search(phonebook);
        else if (command.compare(s_exit) == 0)
            break;
        else
            std::cout << "Invalid command" << std::endl;
    }
}
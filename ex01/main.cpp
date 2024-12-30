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

#include "PhoneBook.hpp"
#include <iostream>

int add(PhoneBook phonebook)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

    std::cout << "Enter the firstname of the contact";
    std::cin >> firstname;
    while ((firstname.size() == 0))
    {
        std::cout << "The firstname cant be empty. Enter it again";
        std::cin >> firstname;
    }
    std::cout << "Enter the lastname of the contact";
    std::cin >> lastname;
    while ((lastname.size() == 0))
    {
        std::cout << "The lastname cant be empty. Enter it again";
        std::cin >> lastname;
    }
    std::cout << "Enter the nickname of the contact";
    std::cin >> nickname;
    while ((nickname.size() == 0))
    {
        std::cout << "The nickname cant be empty. Enter it again";
        std::cin >> nickname;
    }
    std::cout << "Enter the phonenumber of the contact";
    std::cin >> phonenumber;
    while ((phonenumber.size() == 0))
    {
        std::cout << "The phonenumber cant be empty. Enter it again";
        std::cin >> phonenumber;
    }
    std::cout << "Enter the darkestsecret of the contact";
    std::cin >> darkestsecret;
    while ((darkestsecret.size() == 0))
    {
        std::cout << "The darkestsecret cant be empty. Enter it again";
        std::cin >> darkestsecret;
    }
    phonebook.addContact(firstname, lastname, nickname, phonenumber, darkestsecret);
}

int search(Phonebook phonebook)
{

}

int main()
{
    PhoneBook phonebook;
    std::string add ("ADD");
    std::string search ("SEARCH");
    std::string exit ("EXIT");
    std::string command;

    std::cout << "Enter one of the three commands: ADD, SEARCH or EXIT";
    std::cin >> command;
    if (command.compare(add) == 0)
        /// call add function
    if (command.compare(search) == 0)
        ////
    if (command.compare(exit) == 0)
        ////
}
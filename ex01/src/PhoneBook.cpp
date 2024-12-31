/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:15:03 by omartela          #+#    #+#             */
/*   Updated: 2024/12/29 18:15:04 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

void add(PhoneBook &phonebook)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

    std::cout << "Enter the firstname of the contact" << std::endl;
    std::getline(std::cin, firstname);
    check_contact_field(firstname);
    std::cout << "Enter the lastname of the contact" << std::endl;
    std::getline(std::cin, lastname);
    check_contact_field(lastname);
    std::cout << "Enter the nickname of the contact" << std::endl;
    std::getline(std::cin, nickname);
    check_contact_field(nickname);
    std::cout << "Enter the phonenumber of the contact" << std::endl;
    std::getline(std::cin, phonenumber);
    check_contact_field(phonenumber);
    std::cout << "Enter the darkestsecret of the contact" << std::endl;
    std::getline(std::cin, darkestsecret);
    check_contact_field(darkestsecret);
    phonebook.addContact(firstname, lastname, nickname, phonenumber, darkestsecret);
}

void    print_headers()
{
    std::string headers[] = {"Index", "Firstname", "Lastname", "Nickname"};
    std::cout << std::right 
            << std::setw(10) << headers[0] << "|"
            << std::setw(10) << headers[1] << "|"
            << std::setw(10) << headers[2] << "|"
            << std::setw(10) << headers[3] << "|" << std::endl;
}

void    print_contact_line(int index, Contact contact)
{
    std::cout << std::right
            << std::setw(10) << index << "|"
            << std::setw(10) << truncate_str_if_required(contact.getFirstname(), 10) << "|"
            << std::setw(10) << truncate_str_if_required(contact.getLastname(), 10) << "|"
            << std::setw(10) << truncate_str_if_required(contact.getNickname(), 10) << "|"
            << std::endl;
}

void    print_contact_info(Contact contact)
{
    std::cout << "Firstname = " << contact.getFirstname() << std::endl;
    std::cout << "Lastname = " << contact.getLastname() << std::endl;
    std::cout << "Nickname = " << contact.getNickname() << std::endl;
    std::cout << "Phonenumber = " << contact.getPhonenumber() << std::endl;
    std::cout << "Darkestsecret = " << contact.getDarkestsecret() << std::endl;
}

void search(PhoneBook &phonebook)
{
    Contact     contact;
    std::string cindex;
    int         num;

    print_headers();
    for (int i = 0; i < phonebook.getContactCount(); i++)
    {
        contact = phonebook.getContact(i);
        print_contact_line(i, contact);
    }
    std::cout << "Enter contact index" << std::endl;
    std::getline(std::cin, cindex);
    num = convert_string_to_int(cindex);
    if (num < 0 || num > phonebook.getContactCount() - 1)
        std::cout << "There is no contact with that index" << std::endl;
    else
    {
        contact = phonebook.getContact(num);
        print_contact_info(contact);
    }
}
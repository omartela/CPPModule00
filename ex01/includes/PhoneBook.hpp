/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:14:24 by omartela          #+#    #+#             */
/*   Updated: 2024/12/29 18:14:28 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int     ContactCount;
        int     OldestId;
    public:
        PhoneBook();
        void addContact(const std::string& Firstname, const std::string& Lastname, const std::string& Nickname, const std::string& Phonenumber, const std::string& Darkestsecret);
        int getContactCount();
        Contact getContact(int index);
};
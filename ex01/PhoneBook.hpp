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


#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int     ContactCount;
        int     OldestId;
    public:
        PhoneBook() : ContactCount(0), OldestId(0) {}
    
        void    addContact(const std::string& Firstname, const std::string& Lastname, const std::string& Nickname, const std::string& Phonenumber, const std::string& Darkestsecret)
        {
            Contact contact;
            contact.setFirstname(Firstname);
            contact.setLastname(Lastname);
            contact.setNickname(Nickname);
            contact.setPhonenumber(Phonenumber);
            contact.setDarkestsecret(Darkestsecret);
            if (ContactCount == 8)
            {
                if (OldestId == 8)
                    OldestId = 0;
                contacts[OldestId] = contact;
                OldestId += 1;
            }
            else
            {
                contacts[ContactCount] = contact;
                ContactCount += 1;
            }
        }
};
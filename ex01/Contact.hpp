/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:14:42 by omartela          #+#    #+#             */
/*   Updated: 2024/12/29 18:14:45 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
    public:
        Contact()
            : firstname(""), lastname(""), nickname(""), phonenumber(""), darkestsecret("") {}
        
        void    setFirstname(const std::string& newFirstname)
        {
            firstname = newFirstname;
        }

        void    setLastname(const std::string& newLastname)
        {
            lastname = newLastname;
        }

        void    setNickname(const std::string& newNickname)
        {
            nickname = newNickname;
        }

        void    setPhonenumber(const std::string& newPhonenumber)
        {
            phonenumber = newPhonenumber;
        }

        void    setDarkestsecret(const std::string& newDarkestsecret)
        {
            darkestsecret = newDarkestsecret;
        }

        std::string getFirstname() const
        {
            return (firstname);
        }

        std::string getLasttname() const
        {
            return (lastname);
        }

        std::string getNickname() const
        {
            return (nickname);
        }

        std::string getPhonenumber() const
        {
            return (phonenumber);
        }

        std::string getDarkestsecret() const
        {
            return (darkestsecret);
        }
};
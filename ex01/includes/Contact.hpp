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
        Contact();
        void    setFirstname(const std::string& newFirstname);
        void    setLastname(const std::string& newLastname);
        void    setNickname(const std::string& newNickname);
        void    setPhonenumber(const std::string& newPhonenumber);
        void    setDarkestsecret(const std::string& newDarkestsecret);
        std::string getFirstname() const;
        std::string getLastname() const;
        std::string getNickname() const;
        std::string getPhonenumber() const;
        std::string getDarkestsecret() const;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:08:12 by omartela          #+#    #+#             */
/*   Updated: 2025/01/16 15:08:14 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() : firstname(""), lastname(""), nickname(""), phonenumber(""), darkestsecret("") {}

void Contact::setFirstname(const std::string& newFirstname) 
{
    firstname = newFirstname;
}

void Contact::setLastname(const std::string& newLastname) 
{
    lastname = newLastname;
}

void Contact::setNickname(const std::string& newNickname) 
{
    nickname = newNickname;
}

void Contact::setPhonenumber(const std::string& newPhonenumber) 
{
    phonenumber = newPhonenumber;
}

void Contact::setDarkestsecret(const std::string& newDarkestsecret) 
{
    darkestsecret = newDarkestsecret;
}

std::string Contact::getFirstname() const 
{
    return firstname;
}

std::string Contact::getLastname() const 
{
    return lastname;
}

std::string Contact::getNickname() const 
{
    return nickname;
}

std::string Contact::getPhonenumber() const 
{
    return phonenumber;
}

std::string Contact::getDarkestsecret() const 
{
    return darkestsecret;
}
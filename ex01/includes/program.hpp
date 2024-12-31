/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:04:59 by omartela          #+#    #+#             */
/*   Updated: 2024/12/31 10:05:04 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <iomanip>

std::string truncate_str_if_required(const std::string &str, size_t width);
void        check_contact_field(std::string &string);
void        add(PhoneBook &phonebook);
int         convert_string_to_int(std::string &str);
void        search(PhoneBook &phonebook);
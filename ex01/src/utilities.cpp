/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:12:15 by omartela          #+#    #+#             */
/*   Updated: 2024/12/31 10:12:18 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

std::string truncate_str_if_required(const std::string &str, size_t width) 
{
    std::string truncated;
    if (str.size() > width) 
    {
        truncated = str.substr(0, width - 1) + ".";
        return (truncated);
    } 
    else 
        return (str);
}

void check_contact_field(std::string &string)
{
    while (string.empty())
    {
        std::cout << "The contact field can't be empty. Enter it again" << std::endl;
        std::getline(std::cin, string);
    }
}

bool isValidInteger(const std::string &str) 
{
    if (str.empty())
        return (false);
    size_t start = 0;
    if (str[0] == '-' || str[0] == '+') 
        start = 1;
    for (size_t i = start; i < str.size(); ++i) 
    {
        if (!isdigit(str[i])) 
            return (false);
    }
    return (true);
}

int convert_string_to_int(std::string &str)
{
    int num;

    if (isValidInteger(str)) 
    {
        try 
        {
            num = std::stoi(str);
        } 
        catch (const std::invalid_argument&) 
        {
            std::cout << "Invalid argument: The input is not a valid integer." << std::endl;
            return (-1);
        } 
        catch (const std::out_of_range&) 
        {
            std::cout << "Out of range: The number is too large to fit into an int." << std::endl;
            return (-1);
        }
        catch (const std::exception &e)
        {
            std::cout << "Error happened when using std::stoi to convert string to integer." << std::endl;
        }
    } 
    else 
    {
        std::cout << "Error: The input contains invalid characters." << std::endl;
        return (-1);
    }
    return (num);
}
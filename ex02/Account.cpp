/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:06:47 by omartela          #+#    #+#             */
/*   Updated: 2025/01/08 10:06:49 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void): _accountIndex(getNbAccounts()), _amount(0), _nbDeposits(0), _nbWithdrawals(0) 
{
	++_nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = getNbAccounts();
	++_nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
	 std::time_t now;
	 std::tm *local_time;

	 now = std::time(0);
	 local_time = std::localtime(&now);
	 std::cout << "[" << std::setw(4) << std::setfill('0') << local_time->tm_year + 1900
			   << std::setw(2) << std::setfill('0') << local_time->tm_mon + 1
			   << std::setw(2) << std::setfill('0') << local_time->tm_mday << "_"
               << std::setw(2) << std::setfill('0') << local_time->tm_hour
               << std::setw(2) << std::setfill('0') << local_time->tm_min
               << std::setw(2) << std::setfill('0') << local_time->tm_sec << "] ";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_totalAmount +=deposit;
	_totalNbDeposits += 1;
	_nbDeposits +=1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int	withdrawal)
{
	int	p_amount;
	bool rvalue;

	p_amount = _amount;
	rvalue = false;
	if (p_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_totalAmount -=withdrawal;
		_totalNbWithdrawals += 1;
		_nbWithdrawals += 1;
		rvalue = true;
	}
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:";
	if (rvalue)
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	else
		std::cout << "refused" << std::endl;
	return (rvalue);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
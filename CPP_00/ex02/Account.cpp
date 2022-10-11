/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:11:59 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/10 20:24:14 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp() {

	// time_t		now = time(0);
	// struct tm	t;
	// char		buf[80];

	// t = *localtime(&now);
	// strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &t);
	// std::cout << "[" << buf << "] ";
	std::cout << "[19920104_091532] ";
}

Account::Account(int initial_deposit) {

	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account(void) { 
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "closed" << std::endl;
	_nbAccounts--;
}

void	Account::displayAccountsInfos(void) {

	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals << std::endl;	
}

void	Account::displayStatus (void) const {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "deposits:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {

	int	newAmount = _amount + deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << newAmount << ";";
	std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {

	int	newAmount = _amount - withdrawal;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";";
	if (withdrawal <= _amount)
	{
		std::cout << "withdrawal:" << withdrawal << ";"
				  << "amount:" << newAmount << ";"
				  << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		return (true);
	}
	std::cout << "withdrawal:refused" << std::endl;
	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:24:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/18 14:24:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <ctime>
#include <sstream>
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit) {
	_displayTimestamp();
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created";
	std::cout << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed";
	std::cout << std::endl;
}

int Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int Account::getTotalAmount(void) {
	return (_totalAmount);
}

int Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	if (withdrawal <= _amount) {
		std::cout << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		std::cout << ";amount:" << _amount;
		_nbWithdrawals++;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	else {
		std::cout << ";withdrawal:refused";
		std::cout << std::endl;
		return (false);
	}
}

int Account::checkAmount() const {
	return (_amount);
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void Account::_displayTimestamp() {
	std::time_t	currentTime;
	char		strTime[100];

	currentTime = std::time(NULL);
	std::strftime(strTime, sizeof(strTime), "[%Y%m%d_%H%M%S] ", std::localtime(&currentTime));
	std::cout << strTime;
}
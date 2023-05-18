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
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit) {
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_accountIndex++;
	std::cout << _accountIndex << std::endl;
}

Account::~Account() { return;}

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

void Account::displayAccountsInfos() {}

void Account::makeDeposit(int deposit) {
	_amount += deposit;
	_nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
	_amount -= withdrawal;
	_nbWithdrawals++;
	return (true);
}

int Account::checkAmount() const {
	return (_amount);
}

void Account::displayStatus() const {

}

void Account::_displayTimestamp() {

}
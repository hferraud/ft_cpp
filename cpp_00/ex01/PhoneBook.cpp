/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:03:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/17 21:03:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

static void displaySearch(Contact contact[MAX_CONTACT], int total_contact);
static void displaySearchRow(Contact contact, int index);
static void displaySearchCell(std::string cell);

PhoneBook::PhoneBook () {
	this->total_contact = 0;
}

void PhoneBook::addContact () {
	Contact		contact;
	std::string	input;

	std::cout << "Enter first name: ";
	std::cin >> input;
	contact.setFirstName(input);
	std::cout << "Enter last name: ";
	std::cin >> input;
	contact.setLastName(input);
	std::cout << "Enter nickname: ";
	std::cin >> input;
	contact.setNickname(input);
	std::cout << "Enter phone number: ";
	std::cin >> input;
	contact.setPhoneNumber(input);
	std::cout << "Enter secret: ";
	std::cin >> input;
	contact.setSecret(input);
	this->contact[this->total_contact % MAX_CONTACT] = contact;
	this->total_contact++;
}

void PhoneBook::search() {
	int	index;

	displaySearch(this->contact, this->total_contact);
	std::cout << "Enter the index to display more information: ";
	std::cin >> index;
	if (index >= this->total_contact || index >= MAX_CONTACT || index < 0)
		std::cout << "Index is out of bound" << std::endl;
	else
		this->contact[index].toString();
}

static void displaySearch(Contact contact[MAX_CONTACT], int total_contact) {
	for (int i = 0; i < total_contact && i < MAX_CONTACT; i++)
		displaySearchRow(contact[i], i);
}

static void displaySearchRow(Contact contact, int index) {
	std::cout << std::setw(10) << index;
	displaySearchCell(contact.getFirstName());
	displaySearchCell(contact.getLastName());
	displaySearchCell(contact.getNickname());
	std::cout << std::endl;
}

static void displaySearchCell(std::string cell) {
	std::cout << "|";
	if (cell.length() >= 10)
		std::cout << cell.substr(0, CELL_WIDTH  - 1) << '.';
	else
		std::cout << std::setw(10) << cell;
}

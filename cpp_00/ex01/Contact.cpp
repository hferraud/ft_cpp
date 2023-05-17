/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:29:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/17 21:29:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Contact.hpp"

Contact::Contact () {
	this->firstName = "";
	this->lastName = "";
	this->nickname = "";
	this->phoneNumber = "";
	this->firstName = "";
}

void Contact::setFirstName (std::string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName (std::string lastName) {
	this->lastName = lastName;
}

void Contact::setNickname (std::string nickname) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber (std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Contact::setSecret (std::string secret) {
	this->secret = secret;
}

std::string Contact::getFirstName (void) {
	return (this->firstName);
}

std::string Contact::getLastName(void) {
	return (this->lastName);
}

std::string Contact::getNickname(void) {
	return (this->nickname);
}

void Contact::toString () {
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Secret: " << this->secret << std::endl;
}
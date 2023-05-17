/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 23:10:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/17 23:10:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main(void)
{
	PhoneBook	phoneBook;
	std::string	userInput;

	do {
		std::cout << std::endl << "---------\n" << std::endl;
		std::cout << "Please enter one of the following command:" << std::endl;
		std::cout << "ADD: to add a contact to the phonebook" << std::endl;
		std::cout << "SEARCH to search a contact in the phonebook" << std::endl;
		std::cout << "EXIT to exit the program" << std::endl;
		std::cin >> userInput;
		if (userInput == "ADD")
			phoneBook.addContact();
		else if (userInput == "SEARCH")
			phoneBook.search();
	} while (userInput != "EXIT");
}
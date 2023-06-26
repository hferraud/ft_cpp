/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 00:26:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/26 00:26:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Array.hpp"
#include <iostream>

int main(void) {
	{
		Array<int> myArray(5);
		Array<int> myArray2;

		for (size_t i = 0; i < myArray.size(); ++i) {
			myArray[i] = i;
		}
		myArray2 = myArray;
		myArray[1] = 20;
		for (int i = 0; i < 4; ++i) {
			std::cout << myArray[i] << ", ";
		}
		std::cout << myArray[4] << std::endl;
		try {
			myArray[5] = 12;
		}
		catch (std::exception &e) {
			std::cerr << "you're trying to access unallocated memory" << std::endl;
		}
		for (int i = 0; i < 4; ++i) {
			std::cout << myArray2[i] << ", ";
		}
		std::cout << myArray2[4] << std::endl;
	}
	{
		Array<char> myArray(2);

		myArray[0] = 'o';
		myArray[1] = 'p';
		std::cout << myArray[0] << std::endl;
		std::cout << myArray[1] << std::endl;
		try {
			myArray[5] = 12;
		}
		catch (std::exception &e) {
			std::cerr << "you're trying to access unallocated memory" << std::endl;
		}
	}
	{
		Array<int> myArray(5);
		Array<int> secondArray = myArray;

		myArray[0] = 1;
	}
	return (0);
}
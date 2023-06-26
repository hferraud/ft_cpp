/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:40:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/25 11:40:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "iter.hpp"
#include <string>

template <typename T>
void add(T& n) {
	n++;
}

template <>
void add<std::string>(std::string& n) {
	std::reverse(n.begin(), n.end());
}

template <typename T>
void printArr(T* arr) {
	for (int i = 0; i < 3; i++)
		std::cout << "index " << i << ": " << arr[i] << '\n';
}

int main(void) {
	int intArr[] = {1, 2, 3};
	float floatArr[] = {1.3f, 2.3f, 3.3f};
	std::string stringArr[] = {"salut", "alo", "kayak"};

	std::cout << "With int\n";
	printArr(intArr);
	std::cout << "Iter\n";
	iter(intArr, 3, add);
	printArr(intArr);

	std::cout << "With float\n";
	printArr(floatArr);
	std::cout << "Iter\n";
	iter(floatArr, 3, add);
	printArr(floatArr);

	std::cout << "With strings\n";
	printArr(stringArr);
	std::cout << "Iter\n";
	iter(stringArr, 3, add);
	printArr(stringArr);
}
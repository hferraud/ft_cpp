/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:50:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/26 17:50:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"
#include <exception>
#include <iostream>
#include <stdlib.h>
#include <algorithm>

int main(void) {
	Span s1;
	Span s2(1);
	Span s3(200000);

	srand(time(NULL));
	s2.addNumber(1);
	try {
		s2.addNumber(2);
	}
	catch (std::exception const &e) {
		std::cerr << "You can't add more number\n";
	}

	s3.addNumber(6);
	s3.addNumber(3);
	s3.addNumber(17);
	s3.addNumber(9);
	s3.addNumber(11);
	std::cout << "s3:\n";
	s3.printSpan();
	// TESTING SPANS
	try {
		std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << "Something went wrong when searching for span in s1\n";
	}
	try {
		std::cout << "Longest span: " << s1.longestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << "Something went wrong when searching for span in s1\n";
	}
	try {
		std::cout << "Shortest span: " << s2.shortestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << "Something went wrong when searching for span in s2\n";
	}
	try {
		std::cout << "longest span: " << s2.longestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << "Something went wrong when searching for span in s2\n";
	}
	try {
		std::cout << "Shortest span: " << s3.shortestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << "Something went wrong when searching for span in s3\n";
	}
	try {
		std::cout << "Longest span: " << s3.longestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << "Something went wrong when searching for span in s3\n";
	}
	// TESTING FILL
	try {
		s3.fill(20, 10, 20);
	}
	catch (std::exception const &e) {
		std::cerr << "Something went wrong when filling s3\n";
	}
	try {
		s3.fill(-1, 10, 20);
	}
	catch (std::exception const &e) {
		std::cerr << "Something went wrong when filling s3\n";
	}
	try {
		s3.fill(0, 20000000, 20);
	}
	catch (std::exception const &e) {
		std::cerr << "Something went wrong when filling s3\n";
	}

	s3.fill(0, 20, 20);
	std::cout << "s3: \n";
	s3.printSpan();

//	s3.fill(0, 200000, 200000);
//	s3.printSpan();
	std::cout << "Shortest span: " << s3.shortestSpan() << std::endl;
	std::cout << "Longest span: " << s3.longestSpan() << std::endl;
}
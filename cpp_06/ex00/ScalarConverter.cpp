/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:37:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/24 16:37:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &other) {
	*this = other;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {
	(void)other;
	return (*this);
}

void ScalarConverter::convert(std::string literal) {
	char	charLiteral;
	int		intLiteral;
	float	floatLiteral;
	double	doubleLiteral;

	std::cout << "char: ";
	try {
		charLiteral = std::stoi(literal);
		if (std::isprint(charLiteral))
			std::cout << static_cast<char>(charLiteral) << "\n";
		else
			std::cout << "Non displayable\n";
	}
	catch (std::exception& e) {
		std::cout << "impossible\n";
	}
	std::cout << "int: ";
	try {
		intLiteral = std::stoi(literal);
		std::cout << static_cast<int>(intLiteral) << "\n";
	}
	catch (std::exception& e) {
		std::cout << "impossible\n";
	}
	std::cout << "float: ";
	try {
		floatLiteral = std::stof(literal);
		std::cout << std::setprecision(2) << static_cast<float>(floatLiteral) << "f\n";
	}
	catch (std::exception& e) {
		std::cout << "impossible\n";
	}
	std::cout << "double: ";
	try {
		doubleLiteral = std::stod(literal);
		std::cout << std::setprecision(2) << static_cast<double>(doubleLiteral) << "\n";
	}
	catch (std::exception& e) {
		std::cout << "impossible\n";
	}
}
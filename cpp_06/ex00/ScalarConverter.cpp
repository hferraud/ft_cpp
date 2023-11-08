/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:37:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/11/08 18:35:33 by hferraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"
#include <iostream>
#include <float.h>
#include <limits>
#include <cstdlib>
#include <iomanip>
#include <math.h>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &other) {
	*this = other;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {
	(void)other;
	return (*this);
}

void ScalarConverter::displayChar(double val) {
	char 	charVal;

	charVal = static_cast<char>(val);
	std::cout << "Char: ";
	if (val < std::numeric_limits<char>::min() || val > std::numeric_limits<char>::max()
			|| isnan(val))
		std::cout << "impossible";
	else if (!isprint(charVal))
		std::cout << "Non displayable";
	else
		std::cout << charVal;
	std::cout << std::endl;
}

void ScalarConverter::displayInt(double val) {
	int 	intVal;

	intVal = static_cast<int>(val);
	std::cout << "Int: ";
	if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max()
			|| isnan(val))
		std::cout << "impossible";
	else
		std::cout << intVal;
	std::cout << std::endl;
}

void ScalarConverter::displayFloat(double val) {
	float	floatVal;

	floatVal = static_cast<float>(val);
	std::cout << "Float: ";
	std::cout << floatVal << 'f';
	std::cout << std::endl;
}

void ScalarConverter::displayDouble(double val) {
	std::cout << "Double: " << val << std::endl;
}

void ScalarConverter::convert2(std::string literal) {
	double	val;

	val = std::strtod(literal.c_str(), NULL);
	displayChar(val);
	displayInt(val);
	displayFloat(val);
	displayDouble(val);
}

void ScalarConverter::convert(std::string literal) {
	char	charLiteral;
	int		intLiteral;
	float	floatLiteral;
	double	doubleLiteral;

	std::cout << "char: ";
	try {
		charLiteral = std::atoi(literal.c_str());
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
		intLiteral = std::atoi(literal.c_str());
		std::cout << static_cast<int>(intLiteral) << "\n";
	}
	catch (std::exception& e) {
		std::cout << "impossible\n";
	}
	std::cout << "float: ";
	try {
		floatLiteral = std::atof(literal.c_str());
		std::cout << std::setprecision(2) << (floatLiteral) << "f\n";
	}
	catch (std::exception& e) {
		std::cout << "impossible\n";
	}
	std::cout << "double: ";
	try {
		doubleLiteral = std::atof(literal.c_str());
		std::cout << std::setprecision(2) << static_cast<double>(doubleLiteral) << "\n";
	}
	catch (std::exception& e) {
		std::cout << "impossible\n";
	}
}

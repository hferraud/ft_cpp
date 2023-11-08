/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:37:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/24 16:37:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_SCALARCONVERTER_HPP
#define CPP_PISCINE_SCALARCONVERTER_HPP

#include <string>

class ScalarConverter {

private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &other);

	static void displayChar(double val);
	static void displayInt(double val);
	static void displayFloat(double val);
	static void displayDouble(double val);

public:
	~ScalarConverter();

	ScalarConverter &operator=(ScalarConverter const &other);

	static void convert(std::string literal);
	static void convert2(std::string literal);
};

#endif

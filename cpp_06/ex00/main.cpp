/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:45:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/24 16:45:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
	if (argc < 2)
		return (1);
	ScalarConverter::convert(argv[1]);
}
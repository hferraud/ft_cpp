/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:54:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/28 20:54:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"
#include <iostream>
#include <exception>

int main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cerr << "Error: couldn't open file\n";
		return (1);
	}
	try {
		BitcoinExchange btc;
		btc.outputData(argv[1]);
	}
	catch (std::exception const & e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
}
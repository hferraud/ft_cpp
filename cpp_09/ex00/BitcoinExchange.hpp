/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:01:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/07/02 23:01:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_BITCOINEXCHANGE_HPP
#define CPP_PISCINE_BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange {

private:
	std::map<std::string, float> _btc_data;

	void parseData(void);
	void parseDataLine(std::string line);
	void processLine(std::string line);

public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &other);
	~BitcoinExchange();

	BitcoinExchange &operator=(BitcoinExchange const &other);

	void outputData(std::string fileName);
};

#endif

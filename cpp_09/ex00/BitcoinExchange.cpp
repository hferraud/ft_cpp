/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 23:01:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/07/02 23:01:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"
#include <fstream>
#include <istream>
#include <iostream>

static std::ifstream openDataFile(std::string fileName);

BitcoinExchange::BitcoinExchange() {
	parseData();
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::parseData() {
	std::ifstream	file;
	std::string		line;

	file = openDataFile("data.csv");
	std::getline(file, line);
	while (!file.eof())
	{
		parseDataLine(line);
		std::getline(file, line);
	}
}

void BitcoinExchange::parseDataLine(std::string line) {
	size_t		separatorPos;
	std::string	key;
	float		value;

	separatorPos = line.find(',');
	key = line.substr(0, separatorPos);
	value = std::atof(line.substr(separatorPos + 1, line.size()).c_str());
	_btc_data.insert(std::pair<std::string, float>(key, value));
}

void BitcoinExchange::outputData(std::string fileName) {
	std::ifstream	file;
	std::string		line;

	file = openDataFile(fileName);
	std::getline(file, line);
	while (!file.eof())
	{
		processLine(line);
		std::getline(file, line);
	}
}

void BitcoinExchange::processLine(std::string line) {
	size_t		separatorPos;
	std::string	key;
	float		value;
	std::map<std::string, float>::iterator	btc_data;

	separatorPos = line.find('|');
	if (separatorPos == std::string::npos)
	{
		std::cerr << "Error: bad input => " << line << '\n';
		return;
	}
	key = line.substr(0, separatorPos - 1);
	value = std::atof(line.substr(separatorPos + 1, line.size()).c_str());
	if (value < 0)
		std::cerr << "Error: not a positive number\n";
	else if (value > 1000)
		std::cerr << "Error: too large number\n";
	else
	{
		btc_data = _btc_data.upper_bound(line);
		if (btc_data != _btc_data.begin())
			btc_data--;
		std::cout << key << " => " << value << " = ";
		std::cout << btc_data->second * value << '\n';
	}
}

static std::ifstream openDataFile(std::string fileName) {
	std::ifstream	file;
	std::string		line;

	file.open(fileName);
	if (!file.is_open())
		throw (std::runtime_error("Error: couldn't open file: " + fileName));
	std::getline(file, line);
	return (file);
}



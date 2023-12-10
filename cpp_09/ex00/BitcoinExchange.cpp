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
#include <iostream>
#include <cstdlib>


BitcoinExchange::BitcoinExchange() {
	parseDatabase();
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other) {
	_btc_data = other._btc_data;
	return (*this);
}

void BitcoinExchange::outputData(std::string const & fileName) {
	std::ifstream	file;
	std::string		line;

	openDataFile(file, fileName);
	std::getline(file, line);
	while (!file.eof())
	{
		processLine(line);
		std::getline(file, line);
	}
}

void BitcoinExchange::processLine(std::string const & line) {
	size_t		separatorPos;
	std::string	key;
	float		value;
	char*		rest;
	std::map<std::string, float>::iterator	btc_data;

	separatorPos = line.find('|');
	if (separatorPos == std::string::npos)
	{
		std::cerr << "Error: bad input => " << line << '\n';
		return;
	}
	key = line.substr(0, separatorPos - 1);
	value = std::strtof(line.substr(separatorPos + 1).c_str(), &rest);
	if (rest != NULL && *rest != 0) {
		std::cerr << "Error: bad input => " << line << '\n';
		return;
	} else if (!isValidInput(key, value)) {
		return;
	}
	btc_data = _btc_data.upper_bound(line);
	if (btc_data != _btc_data.begin())
		btc_data--;
	std::cout << key << " => " << value << " = ";
	std::cout << btc_data->second * value << '\n';
}

bool BitcoinExchange::isValidInput(std::string &key, float value) {
	if (value < 0) {
		std::cerr << "Error: not a positive number" << std::endl;
		return (false);
	}
	if (value > 1000) {
		std::cerr << "Error: too large number" << std::endl;
		return (false);
	}
	if (!isValidKey(key)) {
		std::cerr << "Error: bad input => " << key << std::endl;
		return (false);
	}
	return (true);
}

bool BitcoinExchange::isValidKey(std::string& key) {
	for (int i = 0; i < 4; i++)
		if (key[i] == '\0' || !isdigit(key[i]))
			return (false);
	if (key[4] != '-')
		return (false);
	for (int i = 5; i < 7; i++)
		if (key[i] == '\0' || !isdigit(key[i]))
			return (false);
	if (key[7] != '-')
		return (false);
	for (int i = 8; i < 10; i++)
		if (key[i] == '\0' || !isdigit(key[i]))
			return (false);
	return (true);
}

void BitcoinExchange::parseDatabase() {
	std::ifstream	file;
	std::string		line;

	openDataFile(file, DATABASE_PATH);
	std::getline(file, line);
	while (!file.eof())
	{
		parseDatabaseLine(line);
		std::getline(file, line);
	}
}

void BitcoinExchange::parseDatabaseLine(std::string& line) {
	size_t		separatorPos;
	std::string	key;
	float		value;
	char*		rest;

	separatorPos = line.find(',');
	if (separatorPos == std::string::npos) {
		throw (std::runtime_error("could not parse database."));
	}
	key = line.substr(0, separatorPos);
	value = std::strtof(line.substr(separatorPos + 1).c_str(), &rest);
	if (rest != NULL && *rest != 0) {
		throw (std::runtime_error("could not parse database."));
	}
	_btc_data.insert(std::pair<std::string, float>(key, value));
}

void BitcoinExchange::openDataFile(std::ifstream& file, std::string const & fileName) {
	std::string		line;

	file.open(fileName.c_str());
	if (!file.is_open())
		throw (std::runtime_error("could not open file: " + fileName));
	std::getline(file, line);
}

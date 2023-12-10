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
# define CPP_PISCINE_BITCOINEXCHANGE_HPP

# include <map>
# include <string>

# define DATABASE_PATH "data.csv"

class BitcoinExchange {

private:
	std::map<std::string, float> _btc_data;

	void parseDatabase();
	void parseDatabaseLine(std::string const & line);
	void processLine(std::string const & line);
	static void openDataFile(std::ifstream& file, std::string const & fileName) ;
	static bool isValidInput(std::string const & key, float value) ;
	static bool isValidKey(std::string const & key) ;
	static bool isDir(std::string const & dir);

public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const & other);
	~BitcoinExchange();

	BitcoinExchange& operator=(BitcoinExchange const & other);

	void outputData(std::string const & fileName);
};

#endif

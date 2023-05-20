/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:27:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 18:27:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>

std::string	findAndReplace(char *s1, char *s2, std::string strFile);

int main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		strFile;
	char			c;

	if (argc != 4)
		std::cerr << "Error: Too few arguments" << std::endl;
	std::string		oFilename(argv[1]);
	oFilename.append(".replace");
	ifs.open(argv[1], std::ifstream::in);
	if (!ifs.is_open())
		return (1);
	ofs.open(oFilename.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!ofs.is_open())
	{
		ifs.close();
		return (1);
	}
	while (ifs.get(c))
		strFile += c;
	strFile = findAndReplace(argv[2], argv[3], strFile);
	ofs << strFile;
	ifs.close();
	ofs.close();
	return (0);
}

std::string	findAndReplace(char *s1, char *s2, std::string strFile) {
	size_t		pos;
	std::string	strS1(s1);
	std::string	strS2(s2);

	pos = strFile.find(strS1);
	while (pos != std::string::npos)
	{
		strFile.erase(pos, strS1.size());
		strFile.insert(pos, strS2);
		pos = strFile.find(strS1);
	}
	return (strFile);
}

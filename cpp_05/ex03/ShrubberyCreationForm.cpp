/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 07:40:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/21 07:40:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrub", 145, 137)
{
	_target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrub", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other.getName(), 145, 137)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	_target = other._target;
	setSigned(other.getSigned());
	return (*this);
}

void ShrubberyCreationForm::process()
{
	std::ofstream file;

	file.open(_target + "_shrubbery");
	file << "      /\\      \n";
	file <<	"     /\\*\\     \n";
	file <<	"    /\\O\\*\\    \n";
	file <<	"   /*/\\/\\/\\   \n";
	file <<	"  /\\O\\/\\*\\/\\  \n";
	file <<	" /\\*\\/\\*\\/\\/\\ \n";
	file <<	"/\\O\\/\\/*/\\/O/\\\n";
	file <<	"      ||      \n";
	file <<	"      ||      \n";
	file <<	"      ||      \n";
	file.close();
}
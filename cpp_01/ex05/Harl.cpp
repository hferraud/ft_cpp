/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:42:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/08/14 11:39:33 by hferraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"
#include <iostream>

Harl::Harl() {return ;}

void Harl::complain(std::string level) {
	void (Harl::*levelFunction[]) ()	=	{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levelStr[]				=	{"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t	size;
	size_t	i;

	i = 0;
	size = sizeof(levelStr) / sizeof(*levelStr);
	while (i < size)
	{
		if (levelStr[i] == level)
		{
			(this->*levelFunction[i])();
			return;
		}
		i++;
	}
}

void Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

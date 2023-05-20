/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:42:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 20:42:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
	Harl		harl;
	std::string	level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t		i;

	if (argc != 2)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	i = 0;
	while (i < (sizeof(level) / sizeof(*level)) && level[i] != argv[1])
		i++;
	switch (i) {
		case 0:
			harl.complain(level[i]);
			break;
		case 1:
			harl.complain(level[i]);
			break;
		case 2:
			harl.complain(level[i]);
			break;
		case 3:
			harl.complain(level[i]);
			break;
	}
}

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

int main(void) {
	Harl		harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("TEST");
	harl.complain("WARNING");
	harl.complain("ERROR");
}
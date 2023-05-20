/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 00:58:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 00:58:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob("Bob", club);

	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	return (0);
}
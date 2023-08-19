/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:50:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/08 08:50:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	DiamondTrap diam1("Frag_01");
	DiamondTrap diam2(diam1);
	diam2.setName("Frag_02");
	diam1.status();
	diam2.status();
	std::cout << std::endl;
	std::cout << "FIGHT !" << std::endl;
	diam1.attack(diam2);
	diam1.attack(diam2);
	diam2.beRepaired(4);
	diam2.status();
	diam1.setAttackDamage(70);
	diam1.attack(diam2);
	diam2.attack(diam1);
	diam2.beRepaired(4);
	diam2.status();
	diam1.status();
	diam1.guardGate();
	diam1.highFiveGuys();
	diam1.whoAmI();
	diam2.whoAmI();
}
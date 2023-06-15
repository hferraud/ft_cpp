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
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	DiamondTrap diam1("Frag_01");
	diam1.status();
	std::cout << std::endl;
	ScavTrap scav("Scav_01");
	scav.status();
//	std::cout << std::endl;
//	DiamondTrap frag2(diam1);
//	std::cout << std::endl;
//	DiamondTrap frag3;
//	frag3 = diam1;
//
//
//	std::cout << std::endl;
//	frag2.setName("Frag_02");
//	frag3.setName("Frag_03");
//	frag3.status();
//	frag2.status();
//	std::cout << std::endl;
//	frag2.attack(frag3);
//	diam1.attack(frag2);
//	diam1.attack(frag2);
//	frag2.beRepaired(4);
//	frag2.status();
//	diam1.setAttackDamage(70);
//	diam1.attack(frag2);
//	frag2.attack(diam1);
//	frag2.beRepaired(4);
//	diam1.guardGate();
//	frag2.status();
//	diam1.status();
//	std::cout << std::endl;
}
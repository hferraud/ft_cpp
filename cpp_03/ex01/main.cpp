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
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap scav1("Scav_01");
	ScavTrap scav2(scav1);
	ScavTrap scavAnon;
	ScavTrap scav3 = scavAnon;

	std::cout << std::endl;
	scav2.setName("Scav_02");
	scav3.setName("Scav_03");
	scav3.status();
	scav2.status();
	std::cout << std::endl;
	std::cout << "FIGHT !" << std::endl;
	scav2.attack(scav3);
	scav1.attack(scav2);
	scav1.attack(scav2);
	scav2.beRepaired(4);
	scav2.status();
	scav1.setAttackDamage(70);
	scav1.attack(scav2);
	scav2.attack(scav1);
	scav2.beRepaired(4);
	scav1.guardGate();
	scav2.status();
	scav1.status();
	std::cout << std::endl;
}
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
	ScavTrap scav3 = scav1;
	ScavTrap clapAnon;


	clap1.attack(clap2);
	clap1Bis.attack(clap2Bis);
	clap1.setAttackDamage(5);
	std::cout << "FIGHT !" << std::endl;
	clap1.attack(clap2);
	clap2.beRepaired(4);
	clap2.status();
	clap1.attack(clap2);
	clap1.attack(clap2);
	clap2.attack(clap1);
	clap2.beRepaired(4);
	clap2.status();
	clap1.status();
}
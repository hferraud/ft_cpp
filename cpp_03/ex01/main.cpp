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
#include <iostream>

int main(void)
{
	ClapTrap clap1("Clap_01");
	ClapTrap clap1Bis(clap1);
	ClapTrap clap2("Clap_02");
	ClapTrap clap2Bis = clap2;
	ClapTrap clapAnon;

	clap1Bis.setName("Clap_01_bis");
	clap2Bis.setName("Clap_02_bis");

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
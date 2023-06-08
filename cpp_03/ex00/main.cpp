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

int main(void)
{
	ClapTrap clap1("Clap_01");
	ClapTrap clap1Bis(clap1);
	ClapTrap clap2("Clap_02");
	ClapTrap clap2Bis = clap2;

	clap1.attack(clap2.getName());
	clap2.takeDamage(clap1.getAttackDamage());

	clap1Bis.attack(clap2Bis.getName());
	clap2Bis.takeDamage(clap1Bis.getAttackDamage());

	clap2.attack(clap1.getName());
	clap1.takeDamage(clap2.getAttackDamage());

	clap2Bis.attack(clap1Bis.getName());
	clap1Bis.takeDamage(clap2Bis.getAttackDamage());
}
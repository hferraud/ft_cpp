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
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap frag1("Frag_01");
	FragTrap frag2(frag1);
	FragTrap frag3;
	frag3 = frag1;


	std::cout << std::endl;
	frag2.setName("Frag_02");
	frag3.setName("Frag_03");
	frag3.status();
	frag2.status();
	std::cout << std::endl;
	frag2.attack(frag3);
	frag1.attack(frag2);
	frag1.attack(frag2);
	frag2.beRepaired(4);
	frag2.status();
	frag1.setAttackDamage(70);
	frag1.attack(frag2);
	frag2.attack(frag1);
	frag2.beRepaired(4);
	frag1.guardGate();
	frag2.status();
	frag1.status();
	std::cout << std::endl;
}
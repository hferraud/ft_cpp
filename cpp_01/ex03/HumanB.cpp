/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 01:01:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 01:01:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name) : weapon(NULL) {
	this->name = name;
}

Weapon &HumanB::getDefaultWeapon() {
	static Weapon defWeapon = Weapon("fists");

	return (defWeapon);
}

void HumanB::setWeapon (Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack () {
	std::cout << name << " attacks with their ";
	if (weapon == NULL)
		std::cout << "fists";
	else
		std::cout << weapon->getType();
	std::cout << std::endl;
}

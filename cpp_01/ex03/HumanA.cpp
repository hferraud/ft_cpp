/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 01:00:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 01:00:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA (std::string name, Weapon &weapon) : weapon(weapon){
	this->name = name;
}

void HumanA::attack () {
	std::cout << name << " attacks with their " << weapon.getType();
	std::cout << std::endl;
}

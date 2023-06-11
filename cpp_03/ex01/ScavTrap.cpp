/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 08:53:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/10 08:53:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->attackDamage = 50;
	this->hitPoints = 100;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other) {}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << name << " disappeared" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

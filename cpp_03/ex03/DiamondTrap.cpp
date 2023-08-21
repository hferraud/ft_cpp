/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 04:16:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/15 04:16:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap()
{
	ScavTrap scav;

	name = "anonymous";
	energyPoints = scav.getEnergyPoints();
	std::cout << "An anonymous DiamondTrap appeared" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	ScavTrap scav;

	this->name = name.append("_clap_name");
	energyPoints = scav.getEnergyPoints();
	std::cout << "DiamondTrap " << this->name << " appeared" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	this->name = other.getName().append("_clap_name");
	std::cout << "DiamondTrap cloned from " << other.getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " disappeared" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other)
{
	name = other.getName();
	this->hitPoints = other.getHitPoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();
	std::cout << "DiamondTrap cloned from " << other.getName() << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "Diamond name: " << name << std::endl;
	std::cout << "Clap name: " << ClapTrap::name << std::endl;
}
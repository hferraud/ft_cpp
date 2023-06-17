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

DiamondTrap::DiamondTrap() : ClapTrap()
{
	name = "anonymous";
	ClapTrap::name = "anonymous_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "An anonymous DiamondTrap appeared" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name.append("_clap_name");
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " appeared" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
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

void DiamondTrap::attack(std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::attack(ClapTrap& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::guardGate(void)
{
	std::cout << "DiamondTrap " << this->name;
	std::cout << " is now in Gate keeper mode" << std::endl;
}

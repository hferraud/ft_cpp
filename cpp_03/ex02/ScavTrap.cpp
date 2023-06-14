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
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "An anonymous scavtrap appeared" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;	
	this->attackDamage = 20;
	std::cout << "Scavtrap " << name << " appeared" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other)
{
	std::cout << "Scavtrap cloned from " << other.getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << name << " disappeared" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	std::cout << "Scavtrap cloned from " << other.getName() << std::endl;
	return (*this);
}

void ScavTrap::attack(std::string& target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name;
		std::cout << " try to attack but is broken" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "Scavtrap " << this->name;
		std::cout << " try to attack but has no energy left" << std::endl;
		return;
	}
	std::cout << "Scavtrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << " inflicting " << this->attackDamage;
	std::cout << " damages" << std::endl;
	energyPoints--;
}

void ScavTrap::attack(ScavTrap& target)
{
	if (hitPoints <= 0 || energyPoints == 0)
	{
		this->attack(target.getName());
		return;
	}
	this->attack(target.getName());
	target.takeDamage(this->attackDamage);
}

void ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap " << this->name;
	std::cout << " is now in Gate keeper mode" << std::endl;
}

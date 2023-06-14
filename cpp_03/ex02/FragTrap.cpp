/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:54:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/14 00:54:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "An anonymous fragtrap appeared" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << name << " appeared" << std::endl;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other)
{
	std::cout << "Fragtrap cloned from " << other.getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap " << name << " disappeared" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	std::cout << "FragTrap cloned from " << other.getName() << std::endl;
	return (*this);
}

void FragTrap::attack(std::string& target)
{
	if (hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->name;
		std::cout << " try to attack but is broken" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "Fragtrap " << this->name;
		std::cout << " try to attack but has no energy left" << std::endl;
		return;
	}
	std::cout << "Fragtrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << " inflicting " << this->attackDamage;
	std::cout << " damages" << std::endl;
	energyPoints--;
}

void FragTrap::attack(FragTrap& target)
{
	if (hitPoints <= 0 || energyPoints == 0)
	{
		this->attack(target.getName());
		return;
	}
	this->attack(target.getName());
	target.takeDamage(this->attackDamage);
}

void FragTrap::guardGate(void)
{
	std::cout << "FragTrap " << this->name;
	std::cout << " is now in Gate keeper mode" << std::endl;
}

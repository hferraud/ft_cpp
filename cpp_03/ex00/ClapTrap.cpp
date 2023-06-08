/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 06:32:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/08 06:32:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include "iostream"

ClapTrap::ClapTrap()
{
	name = "anonymous";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "An anonymous claptrap appeared" << std::endl;
}

ClapTrap::ClapTrap(std::string const name)
{
	this.name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Claptrap " << name << " appeared" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other)
{
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	std::cout << "Claptrap " << name;
	std::cout  << " has been cloned from " << other.getName() << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << name << " disappeared" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	std::cout << "Claptrap " << name << " appeared" << std::endl;
}

std::string& ClapTrap::getName(void)
{
	return (this->name);
}

unsigned int ClapTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}
unsigned int ClapTrap::getAttackDamage(void)
{
	return (this->attackDamage);
}

void ClapTrap::attack(std::string& const target)
{
	if (hitPoints == 0)
	{
		std::cout << "Claptrap " << this->name;
		std::cout << " try to attack but is broken" << std::endl;
		return;
	}
	else if (energyPoints == 0)
	{
		std::cout << "Claptrap " << this->name;
		std::cout << " try to attack but has no energy left" << std::endl;
		return;
	}
	std::cout << "Claptrap " << this->name;
	std::cout << " attacks " << target;
	std::cout << " inflicting " << this->attackDamage;
	std::cout << " damages" << std::endl;
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
		return;
	std::cout << "Claptrap " << this->name;
	std::cout << " took " << amount;
	std::cout << " damages" << std::endl;
	if (hitPoints - amount <= 0)
	{
		std::cout << "Claptrap " << this->name;
		std::cout << " is now broken" << std::endl;
		hitPoints = 0;
	}
	else
		hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name;
		std::cout << " try to repair but has no energy left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name;
	std::cout << " repaired " << amount;
	std::cout << " hit points" << std::endl;
	hitPoints++;
	energyPoints--;
}

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
	name = "Anonymous";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "An anonymous claptrap appeared" << std::endl;
}

ClapTrap::ClapTrap(std::string const name)
{
	this->name = name;
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
	std::cout << "Claptrap cloned from " << other.getName() << std::endl;
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
	std::cout << "ClapTrap cloned from " << other.getName() << std::endl;
	return (*this);
}

std::string& ClapTrap::getName(void)
{
	return (this->name);
}

int ClapTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}
int ClapTrap::getAttackDamage(void)
{
	return (this->attackDamage);
}

void ClapTrap::setName(const std::string name)
{
	std::cout << this->name << " name set to " << name << std::endl;
	this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	std::cout << this->name << " hit points set to " << hitPoints << std::endl;
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	std::cout << this->name << " energy points set to " << energyPoints << std::endl;
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	std::cout << this->name << " attack damage set to " << attackDamage << std::endl;
	this->attackDamage = attackDamage;
}

void ClapTrap::attack(std::string& target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name;
		std::cout << " try to attack but is broken" << std::endl;
		return;
	}
	if (energyPoints == 0)
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

void ClapTrap::attack(ClapTrap& target)
{
	if (hitPoints <= 0 || energyPoints == 0)
	{
		this->attack(target.getName());
		return;
	}
	this->attack(target.getName());
	target.takeDamage(this->attackDamage);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << "Claptrap " << this->name << " is broken " << std::endl;
		return;
	}
	std::cout << "Claptrap " << this->name;
	std::cout << " took " << amount;
	std::cout << " damages" << std::endl;
	if ((unsigned int)hitPoints <= amount)
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
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name;
		std::cout << " try to repair but is broken" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name;
		std::cout << " try to repair but has no energy left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name;
	std::cout << " repaired " << amount;
	std::cout << " hit points" << std::endl;
	hitPoints+= amount;
	energyPoints--;
}

void ClapTrap::status()
{
	std::cout << "ClapTrap " << this->name << ": " << std::endl;
	std::cout << "\thit points: " << this->hitPoints << std::endl;
	std::cout << "\tenergy points: " << this->energyPoints << std::endl;
	std::cout << "\tattack damage: " << this->attackDamage << std::endl;
}

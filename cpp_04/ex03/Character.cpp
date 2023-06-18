/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:36:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 10:36:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <cstring>

Character::Character()
{
	_name = "anonymous";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const& other)
{
	_name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i] != NULL)
			_inventory[i] = other._inventory[i]->clone();
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
	}
}

Character& Character::operator=(Character const& other)
{
	_name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
		 if (other._inventory[i] != NULL)
			_inventory[i] = other._inventory[i]->clone();
	}
	return (*this);
}

const std::string& Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (_inventory[idx] != NULL)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx] == NULL)
		return;
	_inventory[idx]->use(target);
}

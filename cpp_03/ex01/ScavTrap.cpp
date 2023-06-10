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

}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other)
{

}

ScavTrap::~ScavTrap() {}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
}

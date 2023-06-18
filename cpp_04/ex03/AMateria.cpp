/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 08:00:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 08:00:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "undefined";
}

AMateria::AMateria(std::string const& type)
{
	_type = type;
}

AMateria::AMateria(AMateria const& other)
{
	_type = other.getType();
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(AMateria const& other)
{
	_type = other.getType();
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (_type);
}

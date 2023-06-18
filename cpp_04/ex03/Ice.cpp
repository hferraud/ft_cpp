/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 08:52:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 08:52:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const& other) : AMateria(other){}

Ice::~Ice() {}

Ice& Ice::operator=(Ice const& other)
{
	_type = other.getType();
	return (*this);
}

AMateria* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

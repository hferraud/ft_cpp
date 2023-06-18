/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:02:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 09:02:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure"){}

Cure::Cure(Cure const& other) : AMateria(other){}

Cure::~Cure() {}

Cure& Cure::operator=(Cure const& other)
{
	_type = other.getType();
	return (*this);
}

AMateria* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
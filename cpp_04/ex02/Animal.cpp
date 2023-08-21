/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:23:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 07:23:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	this->setType("Animal");
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(Animal const & other)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal& Animal::operator=(Animal const & other)
{
	std::cout << "Animal copy operator" << std::endl;
	this->setType(other.getType());
	return (*this);
}

void Animal::setType(const std::string type)
{
	this->_type = type;
}

std::string Animal::getType() const
{
	return (this->_type);
}

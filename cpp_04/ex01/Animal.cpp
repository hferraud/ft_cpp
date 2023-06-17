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

Animal::Animal(const Animal& other)
{
	this->setType(other.getType());
	std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	this->setType(other.getType());
	std::cout << "Animal copy operator" << std::endl;
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

void Animal::makeSound(void) const
{
	std::cout << "* Animal noises *" << std::endl;
}

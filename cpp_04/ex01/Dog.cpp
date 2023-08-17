/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:07:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 08:07:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	this->setType("Dog");
	_brain = new Brain();
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	_brain = NULL;
	*this = other;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	delete (_brain);
	std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	delete (_brain);
	_brain = new Brain(*other._brain);
	this->setType(other.getType());
	std::cout << "Dog copy operator" << std::endl;
	return (*this);
}

Brain* Dog::getBrain() const
{
	return (_brain);
}

void Dog::makeSound(void) const
{
	std::cout << "WOUAF" << std::endl;
}

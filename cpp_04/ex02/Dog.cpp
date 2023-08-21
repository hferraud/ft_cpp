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
	std::cout << "Dog default constructor" << std::endl;
	this->setType("Dog");
	_brain = new Brain();
}

Dog::Dog(Dog const & other) : Animal(other)
{
	std::cout << "Dog copy constructor" << std::endl;
	if (this == &other)
		return;
	_brain = NULL;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete (_brain);
}

Dog& Dog::operator=(Dog const & other)
{
	std::cout << "Dog copy operator" << std::endl;
	if (this == &other)
		return (*this);
	delete (_brain);
	_brain = new Brain(*other._brain);
	this->setType(other.getType());
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

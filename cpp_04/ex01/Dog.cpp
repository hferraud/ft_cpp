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

Dog::Dog(Dog& other) : Animal(other)
{
	_brain = new Brain();
	*_brain = *other.getBrain();
	std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	delete (_brain);
	std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(Dog& other)
{
	this->setType(other.getType());
	*_brain = *other.getBrain();
	std::cout << "Dog copy operator" << std::endl;
	return (*this);
}

Brain* Dog::getBrain()
{
	return (_brain);
}

void Dog::makeSound(void) const
{
	std::cout << "WOUAF" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:50:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 08:50:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	this->setType("Cat");
	_brain = new Brain();
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	_brain = new Brain(*other.getBrain());
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat()
{
	delete (_brain);
	std::cout << "Cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	this->setType(other.getType());
	_brain = new Brain(*other.getBrain());
	std::cout << "Cat copy operator" << std::endl;
	return (*this);
}

Brain* Cat::getBrain() const
{
	return (_brain);
}

void Cat::makeSound(void) const
{
	std::cout << "MIAOU" << std::endl;
}

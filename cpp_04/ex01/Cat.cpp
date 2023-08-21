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
	std::cout << "Cat default constructor" << std::endl;
	this->setType("Cat");
	_brain = new Brain();
}

Cat::Cat(Cat const & other) : Animal(other)
{
	std::cout << "Cat copy constructor" << std::endl;
	if (this == &other)
		return;
	_brain = NULL;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete (_brain);
}

Cat& Cat::operator=(Cat const & other)
{
	std::cout << "Cat copy operator" << std::endl;
	if (this == &other)
		return (*this);
	delete (_brain);
	_brain = new Brain(*other._brain);
	this->setType(other.getType());
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

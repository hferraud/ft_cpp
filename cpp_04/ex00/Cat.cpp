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
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat& Cat::operator=(Cat& other)
{
	this->setType(other.getType());
	std::cout << "Cat copy operator" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "MIAOU" << std::endl;
}

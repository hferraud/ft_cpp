/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:52:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 11:52:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {}

WrongAnimal::WrongAnimal(WrongAnimal& other) {(void)other;}

WrongAnimal::~WrongAnimal() {}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& other) {(void)other; return (*this);}

void WrongAnimal::makeSound() const
{
	std::cout << "* Wrong animal noises *" << std::endl;
}
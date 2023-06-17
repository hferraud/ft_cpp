/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:56:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 11:56:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {}

WrongCat::WrongCat(WrongCat& other) : WrongAnimal(other) {}

WrongCat::~WrongCat() {}

WrongCat& WrongCat::operator=(WrongCat& other) {(void)other; return (*this);}

void WrongCat::makeSound()
{
	std::cout << "WRONG MIAOU" << std::endl;
}

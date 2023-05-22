/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 07:03:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/22 07:03:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed () {
	rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed &src) {
	rawBits = src.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed () {
	std::cout << "Destructor called" << std::endl;
}

Fixed Fixed::operator= (const Fixed &src) {
	rawBits = src.getRawBits();
}

int Fixed::getRawBits () {
	return (rawBits);
}

void Fixed::setRawBits (int rawBits) {
	this->rawBits = rawBits;
}

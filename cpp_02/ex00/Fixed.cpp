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
	_rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	_rawBits = other.getRawBits();
}

Fixed::~Fixed () {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = other._rawBits;
	return (*this);
}

int Fixed::getRawBits () {
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void Fixed::setRawBits (int rawBits) {
	this->_rawBits = rawBits;
}

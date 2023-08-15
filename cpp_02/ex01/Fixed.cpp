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
#include <cmath>

Fixed::Fixed () {
	_rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed (const int val) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(val << _fractional);
}

Fixed::Fixed (const float val) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(val * (1 << _fractional));
}

Fixed::~Fixed () {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = other.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix) {
	os << fix.toFloat();
	return (os);
}

int Fixed::getRawBits () const {
	return (_rawBits);
}

void Fixed::setRawBits (const int raw) {
	this->_rawBits = raw;
}

float Fixed::toFloat () const {
	return ((float)getRawBits() / (1 << _fractional));
}

int Fixed::toInt () const {
	return (getRawBits() >> _fractional);
}

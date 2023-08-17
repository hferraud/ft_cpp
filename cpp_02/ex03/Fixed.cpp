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
}

Fixed::Fixed (const Fixed &other) {
	*this = other;
}

Fixed::Fixed (const int val) {
	this->setRawBits(val << _fractional);
}

Fixed::Fixed (const float val) {
	this->_rawBits = roundf(val * (1 << _fractional));
}

Fixed::~Fixed () {}

Fixed& Fixed::operator=(const Fixed& other) {
	_rawBits = other.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fix) {
	os << fix.toFloat();
	return (os);
}

Fixed operator+(const Fixed& l, const Fixed& r) {
	Fixed res;
	res.setRawBits(l.getRawBits() + r.getRawBits());
	return (res);
}

Fixed operator-(const Fixed& l, const Fixed& r) {
	Fixed res;
	res.setRawBits(l.getRawBits() - r.getRawBits());
	return (res);
}

Fixed operator*(const Fixed& l, const Fixed& r) {
	Fixed res;
	res.setRawBits((l.getRawBits() * r.getRawBits()) >> l.getFractional());
	return (res);
}

Fixed operator/(const Fixed& l, const Fixed& r) {
	Fixed	res;
	int		rawBits;

	rawBits = roundf((float)l.getRawBits() / r.getRawBits() * (1 << l.getFractional()));
	res.setRawBits(rawBits);
	return (res);
}

Fixed& Fixed::operator++(void) {
	_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed old = *this;

	_rawBits++;
	return (old);
}

Fixed& Fixed::operator--(void) {
	_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed old = *this;

	_rawBits--;
	return (old);
}

bool operator<(const Fixed& l, const Fixed& r) {
	return (l.getRawBits() < r.getRawBits());
}

bool operator>(const Fixed& l, const Fixed& r) {
	return (r < l);
}

bool operator<=(const Fixed& l, const Fixed& r) {
	return (!(l > r));
}

bool operator>=(const Fixed& l, const Fixed& r) {
	return (!(l < r));
}

bool operator==(const Fixed& l, const Fixed& r) {
	return (l.getRawBits() == r.getRawBits());
}

bool operator!=(const Fixed& l, const Fixed& r) {
	return (!(l == r));
}

int Fixed::getRawBits () const {
	return (_rawBits);
}

int Fixed::getFractional() const {
	return (_fractional);
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

Fixed &Fixed::min (Fixed &l, Fixed &r) {
	return ((l < r) ? l : r);
}

const Fixed &Fixed::min (const Fixed &l, const Fixed &r) {
	return ((l < r) ? l : r);
}

Fixed &Fixed::max (Fixed &l, Fixed &r) {
	return ((l > r) ? l : r);
}

const Fixed &Fixed::max (const Fixed &l, const Fixed &r) {
	return ((l > r) ? l : r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:44:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/24 01:44:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

Point::~Point() {}

Point Point::operator= (const Point& other) {
	Point p(other);
	return (p);
}

std::ostream&	operator<<(std::ostream& os, const Point& p) {
	os << "x: " << p._x.toFloat() << " y: " << p._y.toFloat();
	return (os);
}

const Fixed& Point::getX(void) const {
	return (_x);
}

const Fixed& Point::getY(void) const {
	return (_y);
}

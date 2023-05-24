/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:45:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/24 01:45:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include "ostream"

class Point {

private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point& other);
	~Point();

	Point					operator=(const Point& other);
	friend std::ostream&	operator<<(std::ostream& os, const Point& p);

	const Fixed&	getX(void) const;
	const Fixed&	getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif

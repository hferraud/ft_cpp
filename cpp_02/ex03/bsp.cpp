/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:45:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/24 01:45:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"
#include <iostream>

static float area(Point const a, Point const b, Point const c);

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float areaTri = area(a, b, c);
	float area1 = area(a, b, point);
	float area2 = area(a, c, point);
	float area3 = area(b, c, point);
//	std::cout << "area " << area(a, b, c) << std::endl;
//	area(a, b, point);
	return (areaTri == (area1 + area2 + area3));
}

static float area(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = a.getX() * (b.getY() - c.getY());
	area = area + b.getX() * (c.getY() - a.getY());
	area = area + c.getX() * (a.getY() - b.getY());
	area = area / 2.f;
	return (abs(area.toFloat()));
}
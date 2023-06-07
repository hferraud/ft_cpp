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
#include "Fixed.hpp"

static Fixed getDelta(Point const a, Point const b, Point const p);
static bool isInSameSpace(Fixed const delta1, Fixed const delta2);

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed triangleDelta;
	Fixed pointDelta;

	triangleDelta = getDelta(a, b, c);
	pointDelta = getDelta(a, b, point);
	if (!isInSameSpace(triangleDelta, pointDelta))
		return (false);
	triangleDelta = getDelta(a, c, b);
	pointDelta = getDelta(a, c, point);
	if (!isInSameSpace(triangleDelta, pointDelta))
		return (false);
	triangleDelta = getDelta(b, c, a);
	pointDelta = getDelta(b, c, point);
	if (!isInSameSpace(triangleDelta, pointDelta))
	{
		return (false);
	}
	return (true);
}

static Fixed getDelta(Point const a, Point const b, Point const p)
{
	Fixed	slope;
	Fixed	zeroY;
	Fixed	relativeY;

	slope = (b.getY() - a.getY()) / (b.getX() - a.getX());
	zeroY = a.getY() - a.getX() * slope;
	relativeY = slope * p.getX() + zeroY; //mx + p
	return (p.getY() - relativeY);
}

static bool isInSameSpace(Fixed const delta1, Fixed const delta2)
{
	if (delta1 >= 0)
		return (delta2 >= 0);
	else
		return (delta2 < 0);
}

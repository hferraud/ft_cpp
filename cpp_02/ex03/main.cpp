/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 07:03:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/22 07:03:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Point.hpp"

int main(void) {
	const Point a(1, 1);
	const Point b(1, 2);
	const Point c(2, 1);
	const Point p1(1, 5);
	const Point p2(1.5f, 1.5f);
	const Point p3(1.495f, 1.5f);
	const Point p4(1.4985f, 1.5f);

	std::cout << "Point p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << std::endl;
	std::cout << "Point p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << std::endl;
	std::cout << "Point p3 is " << (bsp(a, b, c, p3) ? "inside" : "outside") << std::endl;
	std::cout << "Point p4 is " << (bsp(a, b, c, p4) ? "inside" : "outside") << std::endl;
	return (0);
}
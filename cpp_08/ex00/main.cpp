/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:38:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/26 14:38:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

template<typename T>
void stlSearch(T const & container, int val);

int main(void) {
	{
		std::list<int> l;

		l.push_front(5);
		l.push_front(3);
		l.push_front(1);
		l.push_front(6);
		l.push_front(2);

		std::cout << "List:\n";
		stlSearch(l, 6);
		stlSearch(l, 7);
	}
	{
		std::vector<int> v;

		v.push_back(5);
		v.push_back(3);
		v.push_back(1);
		v.push_back(6);
		v.push_back(2);

		std::cout << "\nVector:\n";
		stlSearch(v, 6);
		stlSearch(v, 7);
	}
}

template<typename T>
void stlSearch(T const & container, int val) {
	std::cout << "Searching " << val << '\n';
	if (easyfind(container, val) == container.end())
		std::cout << "Not found\n";
	else
		std::cout << "Found\n";
}

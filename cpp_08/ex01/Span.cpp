/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:43:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/26 17:43:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"
#include <exception>
#include <vector>
#include <algorithm>
#include <iostream>

Span::Span() {
	_size = 0;
}

Span::Span(unsigned int size) {
	_list = std::vector<int>();
	_size = size;
}

Span::Span(Span const &other) {
	*this = other;
}

Span::~Span() {}

Span &Span::operator=(Span const &other) {
	_list = std::vector<int>(other._list);
	return (*this);
}

void Span::addNumber(int const value) {
	if (_list.size() == _size)
		throw (std::exception());
	_list.push_back(value);
}

int Span::longestSpan() {
	if (_list.size() <= 1)
		return (0);
	std::sort(_list.begin(), _list.end());
	return (_list.at(_list.size() - 1) - _list.at(0));
}

int Span::shortestSpan() {
	std::vector<int>::iterator	i;
	int							span;
	int							currentSpan;

	if (_list.size() <= 1)
		return (0);
	std::sort(_list.begin(), _list.end());
	span = -1;
	for (i = _list.begin(); i != _list.end() - 1; i++)
	{
		currentSpan = *(i + 1) - *i;
		if (span == -1)
			span = currentSpan;
		else if (currentSpan < span)
			span = currentSpan;
	}
	return (span);
}

void Span::fill(unsigned int start, unsigned int end, int range) {
	if (start > end)
		throw (std::exception());
	if (start > _size || end > _size)
		throw (std::exception());
	if (_list.size() < end)
	_list.resize(end);
	for (std::vector<int>::iterator i = _list.begin(); i != _list.end(); i++)
		*i = arc4random() % range;
}

void Span::printSpan() {
	for (std::vector<int>::iterator i = _list.begin(); i != _list.end(); i++)
		std::cout << *i << '\n';
}

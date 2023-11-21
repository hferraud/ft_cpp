/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:43:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/26 17:43:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_SPAN_HPP
#define CPP_PISCINE_SPAN_HPP

#include <vector>
#include <stdlib.h>

class Span {

private:
	std::vector<int>	_list;
	unsigned int		_size;

public:
	Span();
	Span(unsigned int size);
	Span(Span const &other);
	~Span();

	Span &operator=(Span const &other);

	void addNumber(int const value);
	int shortestSpan(void);
	int longestSpan(void);
	void fill(size_t first, size_t last, int range);
	void printSpan();
};

#endif

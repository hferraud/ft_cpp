/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:23:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/25 23:23:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_ARRAY_HPP
#define CPP_PISCINE_ARRAY_HPP

#include <stdlib.h>
#include <exception>
#include <iostream>

template <typename T>
class Array {

private:
	T		*_array;
	size_t	_size;

public:
	Array() {
		_array = NULL;
		_size = 0;
	}

	Array(unsigned int n) {
		_size = n;
		_array = new T[n];
	}

	Array(Array const& other) {
		std::cout << "here";
		*this = other;
	}

	~Array() {
		delete [] (_array);
	}

	Array& operator=(Array const& other) {
		if (this == &other)
			return (*this);
		delete [] _array;
		_size = other._size;
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_array[i] = other._array[i];
		return (*this);
	}

	T& operator[](size_t index) {
		if (index >= _size)
			throw (std::exception());
		return (_array[index]);
	}

	size_t size(void) const {
		return (_size);
	}
};

#endif

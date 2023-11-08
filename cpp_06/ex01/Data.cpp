/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:46:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/11/08 17:46:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <Data.hpp>

Data::Data() {
	_value = 0;
}

Data::Data(int value) {
	_value = value;
}

Data::Data(Data const & other) {
*this = other;
}

Data::~Data() {}

Data& Data::operator=(Data const & other) {
	_value = other._value;
	return (*this);
}

int Data::getValue(void) {
	return (_value);
}

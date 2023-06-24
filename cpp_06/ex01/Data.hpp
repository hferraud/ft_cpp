/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:37:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/24 20:37:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_DATA_HPP
#define CPP_PISCINE_DATA_HPP

class Data {

private:
	int _value;

public:
	Data() {
		_value = 0;
	}

	Data(int value) {
		_value = value;
	}

	Data(Data const &other) {
		*this = other;
	}

	~Data() {}

	Data &operator=(Data const &other) {
		_value = other._value;
		return (*this);
	}

	int getValue(void) {
		return (_value);
	}
};

#endif

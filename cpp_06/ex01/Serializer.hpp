/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:27:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/24 20:27:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_SERIALIZER_HPP
#define CPP_PISCINE_SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer {

private:
	Serializer();
	Serializer(Serializer const &other);

public:
	~Serializer();

	Serializer &operator=(Serializer const &other);

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t ptr);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:27:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/24 20:27:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const &other) {
	*this = other;
}

Serializer::~Serializer() {}

Serializer &Serializer::operator=(Serializer const &other) {
	(void)other;
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t ptr) {
	return (reinterpret_cast<Data*>(ptr));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 20:41:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/24 20:41:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main(void) {
	Data data(42);
	Data* dataPtr;
	uintptr_t serializedData;

	std::cout << "base value: " << data.getValue() << '\n';
	serializedData = Serializer::serialize(&data);
	std::cout << "base address: " << &data << '\n';
	std::cout << "serialized address: " << std::hex << serializedData << std::dec << '\n';
	dataPtr = Serializer::deserialize(serializedData);
	std::cout << "deserialized value: " << dataPtr->getValue() << '\n';
	return (0);
}

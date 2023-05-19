/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:30:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/19 23:30:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void) {
	Zombie	*horde;
	int		size;

	size = 5;
	horde = zombieHorde(size, "Jaques");

	for (int i = 0; i < size; i++) {
		horde[i].announce();
	}
	delete[] horde;
}
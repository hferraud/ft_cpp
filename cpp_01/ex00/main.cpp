/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:20:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/18 23:20:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
	Zombie *z;

	z = newZombie("herve");
	z->announce();
	delete z;
	randomChump("arnaud");
}

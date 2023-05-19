/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:42:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/19 23:42:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	Zombie *horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].set_name(name);
	}
	return (horde);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 01:00:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 01:00:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon (std::string type) {
	this->type = type;
}

void Weapon::setType (std::string type) {
	this->type = type;
}

const std::string &Weapon::getType(void) {
	const std::string	&type = this->type;
	return (type);
}
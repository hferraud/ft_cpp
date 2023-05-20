/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 01:01:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 01:01:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_HUMANB_HPP
# define FT_CPP_HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

public:
	HumanB(std::string name);

	void setWeapon(Weapon &weapon);
	void attack();

private:
	std::string	name;
	Weapon		*weapon;

	static Weapon	&getDefaultWeapon();

};

#endif

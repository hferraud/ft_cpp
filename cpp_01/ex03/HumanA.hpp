/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 01:00:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 01:00:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_HUMANA_HPP
# define FT_CPP_HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {

public:
	HumanA(std::string name, Weapon &weapon);
	void attack();

private:
	std::string	name;
	Weapon		&weapon;

};

#endif

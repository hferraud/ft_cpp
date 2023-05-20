/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 01:00:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 01:00:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_WEAPON_HPP
# define FT_CPP_WEAPON_HPP

#include <string>

class Weapon {

public:
	Weapon(std::string type);

	void				setType(std::string type);
	const std::string	&getType(void);

private:
	std::string	type;
};

#endif

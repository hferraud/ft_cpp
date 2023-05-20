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
	std::string	&getType(void);
	void		setType(std::string);

private:
	std::string	type;
};

#endif

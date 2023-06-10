/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 08:53:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/10 08:53:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_SCAVTRAP_HPP
#define FT_CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{

public:
	ScavTrap();
	ScavTrap(ScavTrap& other);
	~ScavTrap();

	ScavTrap& operator=(ScavTrap& other);
};


#endif

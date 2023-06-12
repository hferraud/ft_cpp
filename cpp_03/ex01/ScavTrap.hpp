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

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{

public:
	ScavTrap();
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap& other);
	~ScavTrap();

	ScavTrap& operator=(ScavTrap& other);

	void attack(std::string& target);
	void attack(ScavTrap& target);
	void guardGate(void);
};


#endif

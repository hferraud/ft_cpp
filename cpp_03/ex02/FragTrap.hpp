/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:54:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/14 00:54:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_FRAGTRAP_HPP
#define FT_CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:
	FragTrap();
	FragTrap(std::string const name);
	FragTrap(FragTrap& other);
	~FragTrap();

	FragTrap& operator=(FragTrap& other);

	void attack(std::string& target);
	void attack(FragTrap& target);
	void highFiveGuys(void);
};

#endif

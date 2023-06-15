/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 06:32:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/08 06:32:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_CLAPTRAP_HPP
#define FT_CPP_CLAPTRAP_HPP

#include "string"

class ClapTrap {

protected:
	std::string name;
	int			hitPoints;
	int 		energyPoints;
	int			attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap& other);
	~ClapTrap();

	ClapTrap& operator=(ClapTrap& other);

	std::string& getName(void);
	int getHitPoints(void);
	int getEnergyPoints(void);
	int getAttackDamage(void);

	void setName(std::string const name);
	void setHitPoints(int hitPoints);
	void setEnergyPoints(int energyPoints);
	void setAttackDamage(int attackDamage);

	void attack(std::string& target);
	void attack(ClapTrap& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void status(void);
};


#endif

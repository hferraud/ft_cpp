/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 23:30:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/19 23:30:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_ZOMBIE_HPP
# define FT_CPP_ZOMBIE_HPP

#include <string>

class Zombie {

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void set_name(std::string name);

	void announce(void);

private:
	std::string	name;
};

Zombie *zombieHorde(int N, std::string name);

#endif

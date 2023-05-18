/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:23:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/18 23:23:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_ZOMBIE_HPP
# define FT_CPP_ZOMBIE_HPP

#include <string>

class Zombie {

public:
	Zombie(std::string name);
	~Zombie();

	void announce(void);

private:
	std::string	name;
};

#endif

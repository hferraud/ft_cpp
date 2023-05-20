/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:42:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/05/20 20:42:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_HARL_HPP
# define FT_CPP_HARL_HPP

#include <string>

class Harl {

public:
	Harl();

	void	complain(std::string level);

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif

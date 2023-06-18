/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:12:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 13:12:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_IMATERIASOURCE_HPP
# define FT_CPP_IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <string>

class IMateriaSource {

public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif

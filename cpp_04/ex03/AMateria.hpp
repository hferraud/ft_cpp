/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 08:00:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 08:00:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_AMATERIA_HPP
#define FT_CPP_AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria {

protected:
	std::string _type;

public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(AMateria const& other);
	virtual ~AMateria();

	AMateria& operator=(AMateria const& other);

	std::string const& getType(void) const;

	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif

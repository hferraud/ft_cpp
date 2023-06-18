/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 08:52:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 08:52:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_ICE_HPP
#define FT_CPP_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

public:
	Ice();
	Ice(Ice const& other);
	~Ice();

	Ice& operator=(Ice const& other);

	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:02:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 09:02:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_CURE_HPP
#define FT_CPP_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

public:
	Cure();
	Cure(Cure const& other);
	~Cure();

	Cure& operator=(Cure const& other);

	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif

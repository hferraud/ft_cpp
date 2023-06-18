/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:14:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 13:14:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_MATERIASOURCE_HPP
#define FT_CPP_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{

private:
	AMateria*	_source[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const& other);
	~MateriaSource();

	MateriaSource& operator=(MateriaSource const& other);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif

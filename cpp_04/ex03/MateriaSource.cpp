/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:14:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 13:14:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
	if (this == &other)
		return;
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] != NULL)
			delete (_source[i]);
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
	for (int i = 0; i < 4; i++)
	{
		delete (_source[i]);
		if (other._source[i] != NULL)
			_source[i] = other._source[i]->clone();
		else
			_source[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] == NULL)
		{
			_source[i] = m;
			return;
		}
		if (_source[i]->getType() == m->getType())
		{
			delete (m);
			return;
		}
	}
	delete (m);
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] == NULL)
			return (NULL);
		if (_source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 13:50:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 13:50:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"
#include <cstring>

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
	std::memset(&_ideas, 0, sizeof(_ideas));
}

Brain::Brain(Brain const & other)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor" << std::endl;
}

Brain& Brain::operator=(Brain const & other)
{
	std::cout << "Brain copy operator" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other.getIdeas()[i];
	return (*this);
}

std::string const* Brain::getIdeas(void) const
{
	return (_ideas);
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return ("Out of bound idea");
	return (_ideas[index]);
}

void Brain::setIdea(std::string idea, int index)
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Index is out of bound" << std::endl;
		return;
	}
	_ideas[index] = idea;
}

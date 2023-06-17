/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:23:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 07:23:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_ANIMAL_HPP
#define FT_CPP_ANIMAL_HPP

#include <string>

class Animal {

protected:
	std::string	_type;

public:
	Animal();
	Animal(Animal& other);
	virtual ~Animal();

	Animal& operator=(Animal& other);

	void setType(std::string const name);
	std::string getType(void) const;

	virtual void makeSound(void) const;
};


#endif

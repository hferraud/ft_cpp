/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:07:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 08:07:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_DOG_HPP
#define FT_CPP_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog();
	Dog(Dog& other);
	~Dog();

	Dog& operator=(Dog& other);

	void makeSound(void) const;
};


#endif

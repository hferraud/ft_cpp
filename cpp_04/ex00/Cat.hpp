/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:50:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 08:50:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_CAT_HPP
#define FT_CPP_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

public:
	Cat();
	Cat(Cat& other);
	~Cat();

	Cat& operator=(Cat& other);

	void makeSound(void) const;
};


#endif

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
#include "Brain.hpp"

class Cat : public Animal {

private:
	Brain* _brain;

public:
	Cat();
	Cat(Cat const & other);
	~Cat();

	Cat& operator=(Cat const & other);

	Brain* getBrain(void) const;

	void makeSound(void) const;
};


#endif

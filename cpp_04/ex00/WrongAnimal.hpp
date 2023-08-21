/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:52:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 11:52:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_WRONGANIMAL_HPP
#define FT_CPP_WRONGANIMAL_HPP

class WrongAnimal {

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal& other);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(WrongAnimal& other);

	void makeSound(void) const;
};


#endif

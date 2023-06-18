/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:36:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 10:36:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_CHARACTER_HPP
#define FT_CPP_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{

private:
	std::string	_name;
	AMateria*	_inventory[4];

public:
	Character();
	Character(std::string name);
	Character(Character const& other);
	~Character();

	Character& operator=(Character const& other);

	std::string const & getName() const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif

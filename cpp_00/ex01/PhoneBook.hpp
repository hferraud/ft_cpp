/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:07:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/17 21:07:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACT 8
# define CELL_WIDTH 10

# include "Contact.hpp"

class PhoneBook {

private:
	Contact contact[MAX_CONTACT];
	int		total_contact;

public:
	PhoneBook();
	void addContact();
	void search();
};

#endif

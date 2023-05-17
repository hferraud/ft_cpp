/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:08:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/17 21:08:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

private:
	std::string	firstName;
	std::string	lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string	secret;

public:
	Contact();

	void		setFirstName(std::string);
	void		setLastName(std::string);
	void		setNickname(std::string);
	void		setPhoneNumber(std::string);
	void		setSecret(std::string);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	void		toString(void);
};

#endif

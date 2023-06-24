/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:53:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/23 20:53:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_INTERN_HPP
#define CPP_PISCINE_INTERN_HPP

#include "AForm.hpp"

class Intern {

private:

public:
	Intern();
	Intern(Intern const &other);
	~Intern();

	Intern &operator=(Intern const &other);

	AForm* makeForm(std::string formName, std::string target) const;
};

#endif

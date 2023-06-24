/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:53:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/23 20:53:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}
Intern::Intern(Intern const &other) {
	(void)other;
}
Intern::~Intern() {}

Intern &Intern::operator=(Intern const &other) {
	(void)other;
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target) const {
	std::string	formNames[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm*		forms[] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};
	AForm*		form;
	size_t		size;

	size = sizeof(formNames) / sizeof(*formNames);
	for (size_t i = 0; i < size; i++)
	{
		if (formNames[i] == formName)
			form = forms[i];
		else
			delete (forms[i]);
	}
	return (form);
}

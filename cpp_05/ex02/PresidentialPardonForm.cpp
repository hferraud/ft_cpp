/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 08:07:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/23 08:07:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Pres", 25, 5)
{
	_target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Pres", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	_target = other._target;
	setSigned(other.getSigned());
	return (*this);
}

void PresidentialPardonForm::execute() {}
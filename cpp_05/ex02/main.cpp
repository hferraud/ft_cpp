/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:13:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 16:13:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <exception>

int main(void)
{
	Bureaucrat const tim("Tim", 1);
	ShrubberyCreationForm sForm("home");
	std::cout << sForm;
	tim.signForm(sForm);
	tim.executeForm(sForm);
	RobotomyRequestForm rForm("wall-E");
	std::cout << rForm;
	tim.signForm(rForm);
	tim.executeForm(rForm);
	PresidentialPardonForm pForm("LE U");
	std::cout << pForm;
	tim.signForm(pForm);
	tim.executeForm(pForm);
}

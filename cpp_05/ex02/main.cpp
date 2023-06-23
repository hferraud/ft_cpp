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

int main(void)
{
	ShrubberyCreationForm sForm("home");
	std::cout << sForm;
	RobotomyRequestForm rForm("wall-E");
	std::cout << rForm;
	PresidentialPardonForm pForm("wall-E");
	std::cout << pForm;
}

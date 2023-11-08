/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:48:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/23 07:48:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 72, 45)
{
	_target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robot", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other) : AForm(other.getName(), 72, 45)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & other)
{
	_target = other._target;
	setSigned(other.getSigned());
	return (*this);
}

void RobotomyRequestForm::process()
{
	int randomNumber;

	srand((time(NULL)));
	randomNumber = rand() % 100;
	std::cout << "VVVVVVZZZZZZZZZZ\n";
	if (randomNumber < 50)
		std::cout << _target << " has been robotomized\n";
	else
		std::cout << _target << " robotomization failed\n";
}

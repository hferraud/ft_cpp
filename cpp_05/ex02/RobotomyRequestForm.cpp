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

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other)
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

void RobotomyRequestForm::execute()
{
	int randomNumber;

	srand(time(NULL));
	randomNumber = rand() % 100;
	std::cout << "rand: " << randomNumber << "\n";
}
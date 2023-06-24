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
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat const b1("Tim", 145);
	Bureaucrat const b2("Tod", 72);
	Bureaucrat const b3("Tom", 25);
	Bureaucrat const b4("Ted", 1);
	Intern const todd;
	AForm* form;
	form = todd.makeForm("shrubbery creation", "home");
	std::cout << *form;
	b1.executeForm(*form);
	b1.signForm(*form);
	b1.executeForm(*form);
	b2.executeForm(*form);
	delete (form);
	form = todd.makeForm("robotomy request", "wall-e");
	std::cout << *form;
	b2.executeForm(*form);
	b2.signForm(*form);
	b2.executeForm(*form);
	b3.executeForm(*form);
	delete (form);
	form = todd.makeForm("presidential pardon", "LE U");
	std::cout << *form;
	b3.executeForm(*form);
	b3.signForm(*form);
	b3.executeForm(*form);
	b4.executeForm(*form);
	delete (form);
}

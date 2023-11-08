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
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>

int main(void)
{
	try
	{
		Form("Test", 151, 151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form("Test", 0, 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat bob("Bob", 41);
	Form eval("Test", 40, 10);

	std::cout << bob << eval;
	bob.signForm(eval);
	std::cout << eval;
	bob.upgrade();
	std::cout << bob << eval;
	bob.signForm(eval);
	std::cout << eval;
}

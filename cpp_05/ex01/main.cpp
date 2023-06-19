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
#include <exception>
#include <iostream>

int main(void)
{
	try
	{
		Bureaucrat jon("Jon", 151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << '\n';
	try
	{
		Bureaucrat jon("Joe", 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << '\n';
	try
	{
		Bureaucrat bob("Bob", 2);
		std::cout << bob;
		bob.upgrade();
		std::cout << bob;
		bob.upgrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << '\n';
	try
	{
		Bureaucrat bill;
		std::cout << bill;
		bill.downgrade();
		std::cout << bill;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

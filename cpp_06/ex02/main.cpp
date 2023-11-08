/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:06:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/24 21:06:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdint.h>

static Base* generate(void);
static void identify(Base* b);
static void identify(Base& b);

int main (void) {
	Base* basePtr;

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		basePtr = generate();
		Base& baseRef = *basePtr;
		identify(basePtr);
		identify(baseRef);
		delete (basePtr);
	}
	return (0);
}

static Base* generate(void) {
	int randomNumber;

	randomNumber = rand();
	randomNumber %= 3;
	if (randomNumber == 0)
	{
		std::cout << "Generated type A\n";
		return (new A);
	}
	else if (randomNumber == 1)
	{
		std::cout << "Generated type B\n";
		return (new B);
	}
	else
	{
		std::cout << "Generated type C\n";
		return (new C);
	}
}

static void identify(Base* p) {
	std::cout << "Type: ";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B\n";
	else
		std::cout << "C\n";
}

static void identify(Base& p) {
	std::cout << "Type: ";
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch (const std::exception& e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch (const std::exception& e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch (const std::exception& e) {}
}
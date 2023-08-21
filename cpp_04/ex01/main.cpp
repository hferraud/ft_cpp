/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:50:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 07:50:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define SIZE 5

int main(void) {
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << "OMG look at this " << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << "OMG look at this " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << std::endl;

	((Cat*) cat)->getBrain()->setIdea("Sleep", 0);
	const Cat copyCat = Cat(*(Cat*) cat);
	((Cat*) cat)->getBrain()->setIdea("Eat", 0);
	std::cout << "Cat first's idea: " << ((Cat*) cat)->getBrain()->getIdea(0);
	std::cout << std::endl;
	std::cout << "CopyCat first's idea: " << copyCat.getBrain()->getIdea(0);
	std::cout << std::endl;
	std::cout << std::endl;
	delete dog;
	delete cat;
	std::cout << std::endl;

	const Animal* zoo[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "Index: " << i << std::endl;
		if (i < SIZE / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "Index: " << i << std::endl;
		delete zoo[i];
	}
	std::cout << std::endl;
}

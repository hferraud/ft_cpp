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

#define SIZE 10

int main(void) {
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal animal;

	std::cout << std::endl;
	std::cout << "OMG look at this " << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << "OMG look at this " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << std::endl;
	cat->getBrain()->setIdea("Sleep", 0);
	const Cat copyCat = Cat(*(Cat*) cat);
	cat->getBrain()->setIdea("Eat", 0);
	std::cout << "Cat first's idea: " << ((Cat*) cat)->getBrain()->getIdea(0);
	std::cout << std::endl;
	std::cout << "CopyCat first's idea: " << copyCat.getBrain()->getIdea(0);
	std::cout << std::endl;
	std::cout << std::endl;
	delete dog;
	delete cat;
	std::cout << std::endl;
}

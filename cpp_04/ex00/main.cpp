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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	const Animal* rat = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal *wAnimal = new WrongAnimal();
	const WrongAnimal *wCat = new WrongCat();

	std::cout << std::endl;
	std::cout << "OMG look at this " << rat->getType() << std::endl;
	rat->makeSound();
	std::cout << "OMG look at this " << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << "OMG look at this " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << std::endl;
	wAnimal->makeSound();
	wCat->makeSound();
	std::cout << std::endl;
	delete rat;
	delete dog;
	delete cat;
}

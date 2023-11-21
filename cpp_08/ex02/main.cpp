/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:41:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/26 22:41:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "MutantStack.hpp"
#include <iostream>

int main() {
	{
		MutantStack<int> mstack;
		MutantStack<int> mstack2;

		mstack.push(5);
		mstack.push(17);
		mstack2 = mstack;

		std::cout << "m1: " << mstack.top() << std::endl;
		std::cout << "m2: " << mstack2.top() << std::endl;

		mstack.pop();

		std::cout << "m1: " << mstack.size() << std::endl;
		std::cout << "m2: " << mstack2.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
//	{
//		std::list<int> mstack;
//		std::list<int> mstack2;
//
//		mstack.push_back(5);
//		mstack.push_back(17);
//		mstack2 = mstack;
//
//		std::cout << "m1: " << mstack.back() << std::endl;
//		std::cout << "m2: " << mstack2.back() << std::endl;
//
//		mstack.pop_back();
//
//		std::cout << "m1: " << mstack.size() << std::endl;
//		std::cout << "m2: " << mstack2.size() << std::endl;
//
//		mstack.push_back(3);
//		mstack.push_back(5);
//		mstack.push_back(737);
//		mstack.push_back(0);
//
//		std::list<int>::iterator it = mstack.begin();
//		std::list<int>::iterator ite = mstack.end();
//
//		++it;
//		--it;
//		while (it != ite) {
//			std::cout << *it << std::endl;
//			++it;
//		}
//		std::list<int> s(mstack);
//	}
	return 0;
}
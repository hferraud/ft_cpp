/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:20:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/07/04 23:20:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <vector>
#include <deque>
#include <exception>
#include <iostream>
#include "PmergeMe.hpp"


int main(int argc, char **argv) {
	try {
		std::vector<int>	vector;
		std::deque<int>		list;
		long				vector_time;
		long				list_time;

		parseArgs(argc, argv, vector);
		std::cout << "Before:\t";
		displayContainer(vector);
		vector_time = PmergeMe(vector);
		std::cout << "After:\t";
		displayContainer(vector);
		parseArgs(argc, argv, list);
		list_time = PmergeMe(list);
		std::cout << "Time to sort with std::vector:\t"<< vector_time << " us" << std::endl;
		std::cout << "Time to sort with std::list:\t"<< list_time << " us" << std::endl;
	}
	catch (std::exception const & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
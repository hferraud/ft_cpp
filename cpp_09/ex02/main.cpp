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

		PmergeMe(argc, argv, vector);
		PmergeMe(argc, argv, list);
	}
	catch (std::exception const & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
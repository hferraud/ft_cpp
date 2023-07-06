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

std::vector<int> parseArgs(int argc, char **argv);
void sortPair(std::vector<int>& collection);
std::deque<int> splitCollection(std::vector<int>& collection);
void insertPend(std::deque<int>& pend, std::vector<int>& main);
void printCollection(std::vector<int> vector);
void printPendCollection(std::deque<int> pend);

int main(int argc, char **argv) {
	std::vector<int>	collection;
	std::deque<int>		pend;

	try {
		collection = parseArgs(argc, argv);
		printCollection(collection);
		sortPair(collection);
		printCollection(collection);
		pend = splitCollection(collection);
		printCollection(collection);
		printPendCollection(pend);
		insertPend(pend, collection);
		printCollection(collection);
	}
	catch (std::exception const & e) {
		std::cerr << "Error" << std::endl;
	}
}
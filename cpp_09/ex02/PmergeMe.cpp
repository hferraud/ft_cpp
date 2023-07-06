/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeME.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:44:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/07/05 00:44:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <vector>
#include <deque>
#include <string>
#include <exception>
#include <iostream>

static bool strIsDigit(std::string str);
static void preSortPair(std::vector<int>& collection);
static void swapPair(std::vector<int>& collection, size_t i, size_t j);
static int binarySearch(std::vector<int>& collection, int elem);
void printCollection(std::vector<int> vector);
void printPendCollection(std::deque<int> pend);

std::vector<int> parseArgs(int argc, char **argv) {
	std::vector<int>	vector;

	if (argc < 2)
		throw (std::exception());
	for (int i = 1; i < argc; i++) {
		if (!strIsDigit(argv[i]))
			throw (std::exception());
		vector.push_back(std::atoi(argv[i]));
	}
	return (vector);
}

void sortPair(std::vector<int>& collection) {
	size_t	i;
	size_t	j;

	preSortPair(collection);
	printCollection(collection);
	for (i = 0; i + 1< collection.size(); i += 2) {
		for (j = i + 2; j + 1< collection.size(); j += 2) {
			if (collection[i] > collection[j])
				swapPair(collection, i, j);
		}
	}
}

std::deque<int> splitCollection(std::vector<int>& collection) {
	std::deque<int>				pendCollection;
	std::vector<int>::iterator	i;

	for (i = collection.begin() + 1; i != collection.end(); i++) {
		pendCollection.push_back(*i);
		i = collection.erase(i);
		if (i == collection.end())
			return (pendCollection);
		if (i + 1 == collection.end()) {
			pendCollection.push_back(*i);
			collection.erase(i);
			return (pendCollection);
		}
	}
	return (pendCollection);
}

void insertPend(std::deque<int>& pend, std::vector<int>& main) {
	size_t	index;

	main.insert(main.begin(), pend.front());
	pend.pop_front();
	while (pend.size() > 0){
		index = binarySearch(main, pend.front());
		std::cout << "index found for " << pend.front() << ": " << index << std::endl;
		main.insert(main.begin() + index, pend.front());
		printCollection(main);
		pend.pop_front();
		printPendCollection(pend);
	}
}

static int binarySearch(std::vector<int>& collection, int elem) {
	size_t	left;
	size_t	right;
	size_t	current;

	left = 0;
	right = collection.size() - 1;
	while (left < right)
	{
		current = (left + right) / 2;
//		std::cout << "left: " << left << std::endl;
//		std::cout << "right: " << right << std::endl;
//		std::cout << "current: " << current << std::endl << std::endl;
		if (collection[current] < elem) {
			left = current + 1;
			if (left == collection.size() - 1)
				return (collection.size());
		}
		else if (collection[current] > elem) {
			if (current == 0)
				return (0);
			right = current - 1;
		}
	}
	return (current);
}

static void preSortPair(std::vector<int>& collection) {
	int tmp;

	for (size_t i = 1; i < collection.size(); i += 2) {
		if (collection[i] > collection[i - 1]) {
			tmp = collection[i];
			collection[i] = collection[i - 1];
			collection[i - 1] = tmp;
		}
	}
}

static void swapPair(std::vector<int>& collection, size_t i, size_t j) {
	int tmp;

	tmp = collection[i];
	collection[i] = collection[j];
	collection[j] = tmp;
	tmp = collection[i + 1];
	collection[i + 1] = collection[j + 1];
	collection[j + 1] = tmp;
}

void printCollection(std::vector<int> vector) {
	std::vector<int>::iterator	iterator;

	for (iterator = vector.begin(); iterator != vector.end(); iterator++)
		std::cout << *iterator << " ";
	std::cout << std::endl;
}

void printPendCollection(std::deque<int> pend) {
	std::deque<int>::iterator	iterator;

	for (iterator = pend.begin(); iterator != pend.end(); iterator++)
		std::cout << *iterator << " ";
	std::cout << std::endl;
}

static bool strIsDigit(std::string str) {
	std::string::iterator	iterator;

	iterator = str.begin();
	while (iterator != str.end()) {
		if (!std::isdigit(*iterator))
			return (false);
		iterator++;
	}
	return (true);
}

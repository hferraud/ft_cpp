/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:49:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/12/05 10:49:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_PMERGEME_HPP
# define FT_CPP_PMERGEME_HPP

# include <cstdlib>
# include <vector>
# include <list>
# include <algorithm>
# include <sys/time.h>

# define THRESHOLD 30

template <typename T>
void mergeInsertSort(T& container);
template <typename T>
void insertSort(T& container);
template <typename T>
void parseArgs(int argc, char **argv, T& container);
template <typename T>
void displayContainer(T& container);

template <typename T>
double PmergeMe(int argc, char** argv, T& container) {
	struct timeval		start_time;
	struct timeval		end_time;

	parseArgs(argc, argv, container);
	std::cout << "Before:\t";
	displayContainer(container);
	gettimeofday(&start_time, NULL);
	mergeInsertSort(container);
	gettimeofday(&end_time, NULL);
	std::cout << "After:\t";
	displayContainer(container);
	return ((end_time.tv_sec - start_time.tv_sec) * 1000000
			+ (end_time.tv_usec - start_time.tv_usec));
}

template <typename T>
void mergeInsertSort(T& container) {
	typename T::iterator middle = container.begin() + container.size() / 2;

	if (container.size() < THRESHOLD) {
		insertSort(container);
	} else {
		T left(container.begin(), middle);
		T right(middle, container.end());
		mergeInsertSort(left);
		mergeInsertSort(right);
		std::merge(left.begin(), left.end(),
				   right.begin(), right.end(),
				   container.begin());
	}
}

template <typename T>
void insertSort(T& container) {
	for (size_t i = 0; i < container.size(); ++i) {
		for (size_t j = i + 1; j < container.size(); ++j) {
			if (container[j] < container[i])
				std::swap(container[i], container[j]);
		}
	}
}

template <typename T>
void parseArgs(int argc, char **argv, T& container) {
	char*	rest;
	int		elem;

	if (argc < 2)
		throw (std::runtime_error("Too few arguments"));
	rest = NULL;
	for (int i = 1; i < argc; i++) {
		elem = strtod(argv[i], &rest);
		if (rest != NULL && *rest != 0)
			throw (std::runtime_error("Invalid Argument"));
		container.push_back(elem);
	}
}

template <typename T>
void displayContainer(T& container) {
	typename T::iterator it;

	for (it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

#endif
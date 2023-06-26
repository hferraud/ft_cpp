/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:40:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/26 22:40:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_MUTANTSTACK_HPP
#define CPP_PISCINE_MUTANTSTACK_HPP

#include <stack>
#include <list>

template <class Tp>
class MutantStack : public std::stack<int>{


public:
	typedef typename std::deque<Tp>::iterator iterator;

	MutantStack() : std::stack<Tp>() {}
	MutantStack(MutantStack const &other) : std::stack<Tp>(other) {}
	~MutantStack() {}

//	MutantStack &operator=(MutantStack const &other) {
//		*this = MutantStack<Tp>(other);
//		return (*this);
//	}

	iterator begin(void) {
		return (this->c.begin());
	}

	iterator end(void) {
		return (this->c.end());
	}
};

#endif

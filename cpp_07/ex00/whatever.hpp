/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 10:54:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/25 10:54:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_WHATEVER_HPP
# define CPP_PISCINE_WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T& a, T& b) {
	return ((a <= b) ? a : b);
}

template <typename T>
T max(T& a, T& b) {
	return ((a >= b) ? a : b);
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:40:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/25 11:40:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_ITER_HPP
# define CPP_PISCINE_ITER_HPP

#include <iostream>

#include <stdlib.h>

template <typename T>
void iter(T* addr, size_t size, void f(T&)) {
	for (size_t i = 0; i < size; i++) {
		f(addr[i]);
	}
}

#endif

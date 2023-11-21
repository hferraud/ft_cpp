/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:39:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/26 14:39:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_EASYFIND_HPP
# define CPP_PISCINE_EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(T const & container, int toFind) {
	return (std::find(container.begin(), container.end(), toFind));
}

#endif

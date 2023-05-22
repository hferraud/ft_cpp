/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 07:03:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/05/22 07:03:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

public:
	Fixed();
	Fixed(Fixed &);
	~Fixed();
	Fixed operator= (const Fixed &);
	int getRawBits(void) const;
	void setRawBits(int);

private:
	int rawBits;

	static const int fractional = 8;
};

#endif

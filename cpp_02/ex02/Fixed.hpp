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

#include <ostream>

class Fixed {

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();

	Fixed &operator=(const Fixed &other);
	friend std::ostream& operator<<(std::ostream& os, const Fixed& fix);

	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);
	friend Fixed operator+(const Fixed& l, const Fixed& r);
	friend Fixed operator-(const Fixed& l, const Fixed& r);
	friend Fixed operator*(const Fixed& l, const Fixed& r);
	friend Fixed operator/(const Fixed& l, const Fixed& r);
	friend bool operator<(const Fixed& l, const Fixed& r);
	friend bool operator>(const Fixed& l, const Fixed& r);
	friend bool operator<=(const Fixed& l, const Fixed& r);
	friend bool operator>=(const Fixed& l, const Fixed& r);
	friend bool operator==(const Fixed& l, const Fixed& r);
	friend bool operator!=(const Fixed& l, const Fixed& r);

	int		getRawBits(void) const;
	void	setRawBits(int);

	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed		&min(Fixed& l, Fixed& r);
	static const Fixed	&min(const Fixed& l, const Fixed& r);
	static Fixed		&max(Fixed& l, Fixed& r);
	static const Fixed	&max(const Fixed& l, const Fixed& r);

private:
	int _rawBits;
	static const int _fractional = 8;
};

#endif

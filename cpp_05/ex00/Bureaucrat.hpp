/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:12:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 16:12:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_BUREAUCRAT_HPP
#define FT_CPP_BUREAUCRAT_HPP

class Bureaucrat {

public:
	Bureaucrat();

	Bureaucrat(Bureaucrat const& other);

	~Bureaucrat();

	Bureaucrat& operator=(Bureaucrat const& other);
};

#endif

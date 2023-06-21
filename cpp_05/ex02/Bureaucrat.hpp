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

#include "AForm.hpp"
#include <string>
#include <iostream>
#include <exception>

#define GRADE_MAX 1
#define GRADE_MIN 150

class AForm;

class Bureaucrat {

private:
	std::string const	_name;
	int					_grade;
	class	GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Grade is too high");
		}
	};
	class	GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Grade is too low");
		}
	};

public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const& other);
	~Bureaucrat();

	Bureaucrat& operator=(Bureaucrat const& other);

	std::string const getName(void) const;
	int getGrade(void) const;

	void upgrade(void);
	void downgrade(void);
	void signForm(AForm form);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);

#endif

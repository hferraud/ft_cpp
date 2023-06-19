/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:47:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/19 12:47:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_FORM_HPP
# define FT_CPP_FORM_HPP

#include <string>

class Form {

private:
	std::string const	_name;
	bool				_signed;
	int const			_signGrade;
	int const			_execGrade;
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
	Form();
	Form(Form const& other);
	~Form();

	Form &operator=(Form const& other);

	std::string const getName(void) const;
	bool getSigned(void) const;
	int const getSignGrade(void) const;
	int const getExecGrade(void) const;
};

#endif
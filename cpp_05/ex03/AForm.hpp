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

#include "Bureaucrat.hpp"
#include <string>
#include <exception>

class Bureaucrat;

class AForm {

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
	class	FormNotSignedException: public std::exception
	{
		const char* what() const throw()
		{
			return ("Form is not signed");
		}
	};

protected:
	std::string _target;

public:
	AForm();
	AForm(std::string const name, int const signGrade, int const execGrade);
	AForm(AForm const& other);
	virtual ~AForm();

	AForm &operator=(AForm const& other);

	std::string const getName(void) const;
	bool getSigned(void) const;
	int getSignGrade(void) const;
	int getExecGrade(void) const;
	std::string getTarget(void) const;
	void setSigned(bool sign);

	void beSigned(Bureaucrat bureaucrat);
	void execute(Bureaucrat const & executor);
	virtual void process(void) = 0;
};

std::ostream& operator<<(std::ostream& os, AForm& obj);

#endif
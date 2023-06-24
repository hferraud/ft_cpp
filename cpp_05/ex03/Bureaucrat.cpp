/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:12:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/18 16:12:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("anonymous")
{
	_grade = GRADE_MIN;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < GRADE_MAX)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > GRADE_MIN)
		throw (Bureaucrat::GradeTooLowException());
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) : _name(other.getName())
{
	_grade = other.getGrade();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& other)
{
	_grade = other.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj)
{
	os << "Bureaucrat " << obj.getName() << "'s grade is: " << obj.getGrade() << '\n';
	return (os);
}

std::string const Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::upgrade()
{
	std::cout << "Trying to upgrade " << _name << '\n';
	if (_grade - 1 < GRADE_MAX)
		throw (Bureaucrat::GradeTooHighException());
	std::cout << _name << " just got upgraded !\n";
	_grade--;
}

void Bureaucrat::downgrade()
{
	std::cout << "Trying to downgrade " << _name << '\n';
	if (_grade + 1 > GRADE_MIN)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << _name << " just got downgraded !\n";
	_grade++;
}

void Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception& e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << ": " << e.what() << "\n";
		return;
	}
	std::cout << _name << " signed " << form.getName() << "\n";
}

void Bureaucrat::executeForm(AForm& form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << _name << " couldn't execute " << form.getName() << ": ";
		std::cout << e.what() << "\n";
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:47:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/19 12:47:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("anonymous"), _signGrade(150), _execGrade(150)
{
	_signed = false;
}

Form::Form(const std::string name, const int signGrade, const int execGrade)
	: _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < GRADE_MAX || execGrade < GRADE_MAX)
		throw (Form::GradeTooHighException());
	if (signGrade > GRADE_MIN || execGrade > GRADE_MIN)
		throw (Form::GradeTooLowException());
	_signed = false;
}

Form::Form(Form const &other) : _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
	*this = other;
}

Form::~Form() {}

Form &Form::operator=(Form const &other)
{
	_signed = other._signed;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, Form& obj)
{
	os << "Form " << obj.getName() << ":\n";
	os << "\tGrade required to sign: " << obj.getSignGrade() << "\n";
	os << "\tGrade required to execute: " << obj.getExecGrade() << "\n";
	if (obj.getSigned())
		os << "\tThis form is signed\n";
	else
		os << "\tThis form is not signed\n";
	return (os);
}

std::string const Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getSignGrade() const
{
	return (_signGrade);
}

int Form::getExecGrade() const
{
	return (_execGrade);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw (Form::GradeTooLowException());
	else
		_signed = true;
}

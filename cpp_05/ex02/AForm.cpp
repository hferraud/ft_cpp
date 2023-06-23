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
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>

AForm::AForm() : _name("anonymous"), _signGrade(150), _execGrade(150)
{
	_signed = false;
}

AForm::AForm(const std::string name, const int signGrade, const int execGrade)
	: _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < GRADE_MAX || execGrade < GRADE_MAX)
		throw (AForm::GradeTooHighException());
	if (signGrade > GRADE_MIN || execGrade > GRADE_MIN)
		throw (AForm::GradeTooLowException());
	_signed = false;
}

AForm::AForm(AForm const &other) : _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
	*this = other;
}

AForm::~AForm() {}

AForm &AForm::operator=(AForm const &other)
{
	_signed = other._signed;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, AForm& obj)
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

std::string const AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getSignGrade() const
{
	return (_signGrade);
}

int AForm::getExecGrade() const
{
	return (_execGrade);
}

std::string AForm::getTarget() const
{
	return (_target);
}

void AForm::setSigned(bool sign)
{
	_signed = sign;
}

void AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw (AForm::GradeTooLowException());
	else
		_signed = true;
}

void AForm::execute(const Bureaucrat &executor)
{
	if (!_signed)
	{
		throw (FormNotSignedException());
	}
	if (executor.getGrade() > _execGrade)
		throw (GradeTooLowException());

}
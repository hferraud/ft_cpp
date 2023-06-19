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

Form::Form() : _name("anonymous"), _signGrade(150), _execGrade(150)
{
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

std::string const Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int const Form::getSignGrade() const
{}

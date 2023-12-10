/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:12:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/07/04 14:12:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <stack>
#include <exception>
#include <cstdlib>

static void rpnOperate(std::stack<double>& stack, std::string::iterator& iterator);
static void rpnPush(std::stack<double>& stack, std::string::iterator& iterator);
static void skipSpace(std::string::iterator& iterator);
static bool isOperator(char c);

double rpnProcess(std::string expression) {
	std::stack<double>		stack;
	std::string::iterator	iterator;

	iterator = expression.begin();
	while (iterator != expression.end())
	{
		skipSpace(iterator);
		if (std::isdigit(*iterator))
			rpnPush(stack, iterator);
		else if (isOperator(*iterator))
			rpnOperate(stack, iterator);
		else if (iterator != expression.end())
			throw (std::exception());
	}
	if (stack.size() != 1)
		throw (std::exception());
	return (stack.top());
}

static void rpnOperate(std::stack<double>& stack, std::string::iterator& iterator) {
	double	rightValue;
	double	leftValue;
	double	result;

	if (stack.size() < 2)
		throw (std::exception());
	leftValue = stack.top();
	stack.pop();
	rightValue = stack.top();
	stack.pop();
	if (*iterator == '+')
		result = rightValue + leftValue;
	else if (*iterator == '-')
		result = rightValue - leftValue;
	else if (*iterator == '*')
		result = rightValue * leftValue;
	else if (*iterator == '/')
		result = rightValue / leftValue;
	stack.push(result);
	iterator++;
}

static void rpnPush(std::stack<double>& stack, std::string::iterator& iterator) {
	stack.push(std::atof(iterator.operator->()));
	if (stack.top() < 0 || stack.top() > 10)
		throw (std::exception());
	iterator++;
}

static void skipSpace(std::string::iterator& iterator) {
	while (std::isspace(*iterator))
		iterator++;
}

static bool isOperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

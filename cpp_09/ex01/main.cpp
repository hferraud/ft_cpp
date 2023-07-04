/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:45:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/07/04 14:45:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

double rpnProcess(std::string expression);
void rpnTest(std::string expr);

int main(int argc, char **argv)
{
	{
		if (argc != 2) {
			std::cerr << "Error\n";
			return (1);
		}
		try {
			std::cout << rpnProcess(argv[1]) << std::endl;
		}
		catch (std::exception const & e) {
			std::cerr << "Error\n";
			return (1);
		}
	}
//	{
//		(void)argc;
//		(void)argv;
//		rpnTest("8 9 * 9 - 9 - 9 - 4 - 1 +");
//		rpnTest("7 7 * 7 -");
//		rpnTest("1 2 * 2 / 2 * 2 4 - +");
//		rpnTest("(1 + 1)");
//		rpnTest("1");
//		rpnTest(" 1");
//		rpnTest(" 1 ");
//		rpnTest("1 ");
//		rpnTest("1 + a");
//		rpnTest("1 q 1");
//		rpnTest("   1   1   +   ");
//	}
}

void rpnTest(std::string expr) {
	std::cout << "expr: " << expr << std::endl;
	try {
		std::cout << rpnProcess(expr) << std::endl;
	}
	catch (std::exception const & e) {
		std::cerr << "Error\n";
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hferraud <hferraud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:48:00 by hferraud          #+#    #+#             */
/*   Updated: 2023/06/23 07:48:00 by hferraud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_PISCINE_ROBOTOMYREQUESTFORM_HPP
#define CPP_PISCINE_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {


public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& other);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const& other);

	void execute(void);
};

#endif

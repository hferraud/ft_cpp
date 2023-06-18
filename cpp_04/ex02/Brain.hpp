/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mururoah <mururoah@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 13:50:00 by mururoah          #+#    #+#             */
/*   Updated: 2023/06/17 13:50:00 by mururoah         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CPP_BRAIN_HPP
#define FT_CPP_BRAIN_HPP

#include <iostream>

class Brain {

protected:
	std::string _ideas[100];

public:
	Brain();
	Brain(Brain& other);
	~Brain();

	Brain& operator=(Brain& other);

	std::string* getIdeas(void);
	std::string getIdea(int index) const;
	void setIdea(std::string idea, int index);
};


#endif

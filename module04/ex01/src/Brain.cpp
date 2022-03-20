/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 01:54:46 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/20 17:52:59 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	prompt(CONSTRUCTOR, BRAIN);
}

Brain::Brain(Brain const &src)
{
	std::cout << "copy ";
	prompt(CONSTRUCTOR, BRAIN);
	*this = src;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	prompt(DESTRUCTOR, BRAIN);
}

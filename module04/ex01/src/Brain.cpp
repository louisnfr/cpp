/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 01:54:46 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 01:54:46 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : _var(0)
{
}

Brain::Brain(Brain const &src)
{
	*this = src;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Brain::~Brain(void)
{
}

int	Brain::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Brain const &i)
{
	cout << i.getVar();
	return (cout);
}

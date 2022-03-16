/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:58:20 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/13 01:59:02 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _var(0)
{
	return ;
}

Point::Point(Point const &src)
{
	*this = src;
	return ;
}

Point::~Point(void)
{
	return ;
}

int	Point::getVar(void) const
{
	return (this->_var);
}

Point	&Point::operator=(Point const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}


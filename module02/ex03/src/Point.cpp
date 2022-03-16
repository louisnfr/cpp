/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:58:20 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/16 22:18:27 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(Point const &copy) : _x(copy.getX()), _y(copy.getY())
{
}

Point::~Point(void)
{
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

Point	&Point::operator=(Point const &rhs)
{
	// can't modify a const value (Fixed const _x)
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Point const &rhs)
{
	o << "(" << rhs.getX() << ", " << rhs.getY() << ")";
	return (o);
}

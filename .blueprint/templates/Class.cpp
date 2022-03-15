/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:58:20 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/13 01:59:02 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Class::Class(void) : _var(0)
{
	return ;
}

Class::Class(Class const &src)
{
	*this = src;
	return ;
}

Class::~Class(void)
{
	return ;
}

int	Class::getVar(void) const
{
	return (this->_var);
}

Class	&Class::operator=(Class const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}


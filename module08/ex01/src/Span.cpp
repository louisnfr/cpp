/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:51:52 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/31 22:51:52 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _var(0)
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span	&Span::operator=(Span const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Span::~Span(void)
{
}

int	Span::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Span const &i)
{
	cout << i.getVar();
	return (cout);
}

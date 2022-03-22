/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:25:10 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 15:25:10 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _var(0)
{
}

Form::Form(Form const &src)
{
	*this = src;
}

Form	&Form::operator=(Form const &rhs)
{
	this->_var = rhs.getVar();
	return (*this);
}

Form::~Form(void)
{
}

int	Form::getVar(void) const
{
	return (this->_var);
}

std::ostream	&operator<<(std::ostream &cout, Form const &i)
{
	cout << i.getVar();
	return (cout);
}

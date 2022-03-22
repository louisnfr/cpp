/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:25:10 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 16:21:56 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

static void	check_grade(unsigned int sign_grade, unsigned int exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string name, unsigned int sign_grade, unsigned int exec_grade)
	: _name(name), _is_signed(false),
	_sign_grade(sign_grade), _exec_grade(exec_grade)
{
	check_grade(sign_grade, exec_grade);
}

Form::Form(Form const &src)
	: _name(src._name), _is_signed(src._is_signed),
	_sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	*this = src;
}

Form	&Form::operator=(Form const &rhs)
{
	this->_is_signed = rhs._is_signed;
	return (*this);
}

Form::~Form(void)
{
}

std::string const	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getStatus(void) const
{
	return (this->_is_signed);
}

unsigned int	Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

unsigned int	Form::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->_sign_grade)
		throw Form::GradeTooLowException();
	this->_is_signed = true;
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}

std::ostream	&operator<<(std::ostream &cout, Form const &i)
{
	cout << "Form name: " << i.getName() << std::endl;
	cout << "- is_signed: " << i.getStatus() << std::endl;
	cout << "- Grade to sign: " << i.getSignGrade() << std::endl;
	cout << "- Grade to execute: " << i.getExecGrade() << std::endl;
	return (cout);
}

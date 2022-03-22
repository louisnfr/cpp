/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:25:10 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/22 18:08:21 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

static void	check_grade(unsigned int sign_grade, unsigned int exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw AForm::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(std::string name, unsigned int sign_grade, unsigned int exec_grade)
	: _name(name), _is_signed(false),
	_sign_grade(sign_grade), _exec_grade(exec_grade)
{
	check_grade(sign_grade, exec_grade);
}

AForm::AForm(AForm const &src)
	: _name(src._name), _is_signed(src._is_signed),
	_sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	*this = src;
}

AForm	&AForm::operator=(AForm const &rhs)
{
	this->_is_signed = rhs._is_signed;
	return (*this);
}

AForm::~AForm(void)
{
}

std::string const	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getStatus(void) const
{
	return (this->_is_signed);
}

unsigned int	AForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

unsigned int	AForm::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void	AForm::beSigned(Bureaucrat const &signer)
{
	if (signer.getGrade() > this->_sign_grade)
		throw AForm::GradeTooLowException();
	this->_is_signed = true;
}

void	AForm::beExecuted(Bureaucrat const &executor) const
{
	if (this->_is_signed == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_exec_grade)
		throw AForm::GradeTooLowException();
	this->execute();
}

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}

char const	*AForm::FormNotSignedException::what(void) const throw()
{
	return ("form not signed");
}

std::ostream	&operator<<(std::ostream &cout, AForm const &i)
{
	cout << "AForm name: " << i.getName() << std::endl;
	cout << "- is_signed: " << i.getStatus() << std::endl;
	cout << "- Grade to sign: " << i.getSignGrade() << std::endl;
	cout << "- Grade to execute: " << i.getExecGrade() << std::endl;
	return (cout);
}
